#嘿嘿我的ljx
import time
import os
import requests
from bs4 import BeautifulSoup
endpoint = "http://10.132.246.246"
courseId = 110  # 程序设计基础
requestDelay = 0.3  # 请求延迟，单位秒
dataFolder = "data"
cookies = {"sessionid": "", # 请自行打开浏览器开发者模式查看
           "csrftoken": ""}


def toValidFileName(name):
    return name.replace("/", "-").replace(":", "：").replace("?", "？").replace("*", "×").replace("\"", "“").replace("<", "《").replace(">", "》").replace("|", "｜")


if not os.path.exists(dataFolder):
    os.mkdir(dataFolder)
coursePageUrl = endpoint + "/course/"+str(courseId)+"/detail"
coursePage = requests.get(coursePageUrl, cookies=cookies)
coursePage.encoding = 'utf-8'
coursePageSoup = BeautifulSoup(coursePage.text, 'html.parser')
nickname = coursePageSoup.div.ul.li.text
print(nickname)
userid = int(coursePageSoup.div.ul.li.a['href'].split('/')[2])
print(userid)
courseDetails = coursePageSoup.table.tbody.find_all('a')
courseVolumeLinks = []
for courseDetail in courseDetails:
    courseVolumeLinks.append(
        {"title": courseDetail.text, "url": courseDetail['href']})
for courseVolumeLink in courseVolumeLinks:
    print("正在获取: "+courseVolumeLink["title"])
    courseVolumeUrl = endpoint + courseVolumeLink["url"]
    courseVolumePage = requests.get(courseVolumeUrl, cookies=cookies)
    courseVolumePage.encoding = 'utf-8'
    courseVolumePageSoup = BeautifulSoup(courseVolumePage.text, 'html.parser')
    courseVolumeTable = courseVolumePageSoup.find_all(
        'table')[1].tbody.find_all('tr')
    volumnProblems = []
    for courseVolume in courseVolumeTable:
        tds = courseVolume.find_all('td')
        volumnProblems.append({
            'ac': tds[0].a.font.text.strip() == "AC",
            'id': int(tds[1].text),
            'title': tds[2].a.text.strip(),
            'url': tds[2].a['href']
        })
    time.sleep(requestDelay)
    for problem in volumnProblems:
        if not problem['ac']:
            continue
        commitUrl = endpoint + "/judge/course/" + \
            str(courseId)+"/judgelist/?problem=" + \
            str(problem['id'])+"&userprofile="+str(userid)
        print("  正在获取: "+problem['title'])
        time.sleep(requestDelay)
        commitPage = requests.get(commitUrl, cookies=cookies)
        commitPage.encoding = 'utf-8'
        commitPageSoup = BeautifulSoup(commitPage.text, 'html.parser')
        commitTable = commitPageSoup.table.tbody.find_all('tr')
        commitId = 0
        for commit in commitTable:
            tds = commit.find_all('td')
            commitResult = tds[5].text.strip()
            if commitResult == "答案正确":
                commitId = int(tds[0].text)
                break
        if commitId == 0:
            print("    未找到提交记录")
            continue
        print("    正在获取提交记录: "+str(commitId))
        commitDetailUrl = endpoint + "/judge/" + \
            str(commitId) + "/course/" + str(courseId) + "/"
        commitDetailPage = requests.get(commitDetailUrl, cookies=cookies)
        commitDetailPage.encoding = 'utf-8'
        commitDetailPageSoup = BeautifulSoup(
            commitDetailPage.text, 'html.parser')
        sourceCode = commitDetailPageSoup.find_all('pre')[1].text
        if not sourceCode:
            print("    未找到源代码")
            continue
        souceCodeProcessed = ""
        for sourceLine in sourceCode.splitlines():
            sourceLine = sourceLine.rstrip() + '\n'
            souceCodeProcessed += sourceLine
        fileName = dataFolder + "/" + \
            str(problem['id']) + "-"+toValidFileName(problem["title"])+".cpp"
        print("    正在保存源代码: "+fileName)
        with open(fileName, 'w', encoding='utf-8') as f:
            f.write(souceCodeProcessed)
    time.sleep(requestDelay)
