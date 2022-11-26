#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    double c, eng, math;
    double sum()
    {
        return c + eng + math;
    }
};

// bool cmp(Student &student1, Student &student2)
// {
//     return student1.sum() > student2.sum();
// }

int main()
{
    Student students[5];
    cin >> students[0].name >> students[0].c >> students[0].eng >> students[0].math;
    cin >> students[1].name >> students[1].c >> students[1].eng >> students[1].math;
    cin >> students[2].name >> students[2].c >> students[2].eng >> students[2].math;
    cin >> students[3].name >> students[3].c >> students[3].eng >> students[3].math;
    cin >> students[4].name >> students[4].c >> students[4].eng >> students[4].math;
    // sort(students, students + 5, cmp);
    for (int i = 0; i < 5; i++)
        for (int j = 4; j > i; j--)
            if (students[j].sum() > students[j - 1].sum())
                swap(students[j], students[j - 1]);
    for (int i = 0; i < 5; i++)
        printf("%s %.1lf %.1lf %.1lf %.1lf\n", students[i].name.c_str(), students[i].c, students[i].eng, students[i].math, students[i].sum());
    return 0;
}
