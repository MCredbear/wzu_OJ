#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int type;
    string s2, s3, s4;
    double d1, d2, d3;
};

int main()
{
    vector<Student> students;
    while (1)
    {
        string Insert;
        cin >> Insert;
        if (Insert == "QUIT" | Insert == "EXIT")
            break;
        Student student;
        if (Insert == "LIST")
        {
            student.type = 1;
        }
        else
        {
            cin >> student.s2 >> student.s3 >> student.s4 >> student.d1 >> student.d2 >> student.d3;
            student.type = 0;
        }
        students.push_back(student);
    }
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].type == 0)
            printf("%s %s %s %.2lf %.2lf %.2lf %.2lf %.2lf\n", students[i].s2.c_str(), students[i].s3.c_str(), students[i].s4.c_str(), students[i].d1, students[i].d2, students[i].d3, (students[i].d1 + students[i].d2 + students[i].d3) / 3, students[i].d1 + students[i].d2 + students[i].d3);
        else
        {
            for (int j = 0; j < i; j++)
                if (students[j].type == 0)
                    printf("%s %s %s %.2lf %.2lf %.2lf %.2lf %.2lf\n", students[j].s2.c_str(), students[j].s3.c_str(), students[j].s4.c_str(), students[j].d1, students[j].d2, students[j].d3, (students[j].d1 + students[j].d2 + students[j].d3) / 3, students[j].d1 + students[j].d2 + students[j].d3);
        }
    }
    cout << "Good bye!" << endl;
    return 0;
}
