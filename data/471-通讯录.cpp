#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int type;
    string s2, s3;
};

string toDownCase(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 'A' & s[i] <= 'Z')
            s[i] += 'a' - 'A';
    return s;
}

int main()
{
    vector<Student> students;
    while (1)
    {
        string Insert;
        cin >> Insert;
        if (Insert == "Quit" | Insert == "Exit")
            break;
        Student student;
        if (Insert == "Delete")
        {
            student.type = 5;
            cin >> student.s2;
        }
        if (Insert == "Find")
        {
            student.type = 3;
            cin >> student.s2;
        }
        if (Insert == "Insert")
        {
            cin >> student.s2 >> student.s3;
            student.type = 1;
        }
        students.push_back(student);
    }
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].type == 5)
        {
            int j;
            for (j = 0; j < i; j++)
                if (students[j].type == 1)
                    if (toDownCase(students[j].s2) == toDownCase(students[i].s2))
                    {
                        printf("Deleted\n");
                        students[j].type = -1;
                        break;
                    }
            if (j == i)
                printf("Name Not Exist\n");
        }
        if (students[i].type == 3)
        {
            int j;
            for (j = 0; j < i; j++)
                if (students[j].type == 1)
                    if (toDownCase(students[j].s2) == toDownCase(students[i].s2))
                    {
                        printf("%s\n", students[j].s3.c_str());
                        break;
                    }
            if (j == i)
                printf("Not Find\n");
        }
        if (students[i].type == 1)
        {
            int j;
            for (j = 0; j < i; j++)
                if (students[j].type == 1)
                    if (toDownCase(students[j].s2) == toDownCase(students[i].s2))
                    {
                        printf("Already Exist\n");
                        students[i].type = -1;
                        break;
                    }
            if (j == i)
                printf("Inserted\n");
        }
    }
    return 0;
}
