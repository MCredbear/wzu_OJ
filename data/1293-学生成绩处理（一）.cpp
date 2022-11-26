#include <bits/stdc++.h>
using namespace std;

struct Student
{
    double s1, s2, s3;
};

// bool c(Student &st1, Student &st2)
// {
//     return (st1.s1 + st1.s2 + st1.s3 > st2.s1 + st2.s2 + st2.s3);
// }

int main()
{
    Student students[5];
    for (int i = 0; i < 5; i++)
        cin >> students[i].s1 >> students[i].s2 >> students[i].s3;
    // sort(students, students + 5, c);
    for (int i = 0; i < 5; i++)
        for (int j = 4; j > i; j--)
            if (students[j].s1 + students[j].s2 + students[j].s3 > students[j - 1].s1 + students[j - 1].s2 + students[j - 1].s3)
                swap(students[j], students[j - 1]);
    for (int i = 0; i < 5; i++)
        printf("%.1lf %.1lf %.1lf %.1lf\n", students[i].s1, students[i].s2, students[i].s3, students[i].s1 + students[i].s2 + students[i].s3);
    return 0;
}
