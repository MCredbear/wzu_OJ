#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int type;
    string s2, s3, s4, s5, s6, s7;
    double d1, d2, d3;
};

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
        if (Insert == "Find")
        {
            student.type = 3;
            cin >> student.s2;
        }
        if (Insert == "List")
        {
            student.type = 2;
        }
        if (Insert == "Insert")
        {
            cin >> student.s2 >> student.s3 >> student.s4 >> student.s5 >> student.s6 >> student.s7 >> student.d1 >> student.d2 >> student.d3;
            student.type = 1;
        }
        students.push_back(student);
    }
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].type == 3)
        {
            int j;
            for (j = 0; j < i; j++)
                if (students[j].type == 1)
                    if (students[j].s2 == students[i].s2)
                    {
                        printf("Find:\n%s %s %s %s %s %s %.1lf %.1lf %.1lf %.1lf %.1lf\n", students[j].s2.c_str(), students[j].s3.c_str(), students[j].s4.c_str(), students[j].s5.c_str(), students[j].s6.c_str(), students[j].s7.c_str(), students[j].d1, students[j].d2, students[j].d3, (students[j].d1 + students[j].d2 + students[j].d3) / 3, students[j].d1 + students[j].d2 + students[j].d3);
                        break;
                    }
            if (j == i)
                printf("Find:\nFailed\n");
        }
        if (students[i].type == 1)
        {
            int j;
            for (j = 0; j < i; j++)
                if (students[j].type == 1)
                    if (students[j].s2 == students[i].s2)
                    {
                        printf("Insert:\nFailed\n");
                        break;
                    }
            if (j == i)
                printf("Insert:\n%s %s %s %s %s %s %.1lf %.1lf %.1lf %.1lf %.1lf\n", students[i].s2.c_str(), students[i].s3.c_str(), students[i].s4.c_str(), students[i].s5.c_str(), students[i].s6.c_str(), students[i].s7.c_str(), students[i].d1, students[i].d2, students[i].d3, (students[i].d1 + students[i].d2 + students[i].d3) / 3, students[i].d1 + students[i].d2 + students[i].d3);
        }
        if (students[i].type == 2)
        {
            printf("List:\n");
            for (int j = 0; j < i; j++)
                if (students[j].type == 1)
                    printf("%s %s %s %s %s %s %.1lf %.1lf %.1lf %.1lf %.1lf\n", students[j].s2.c_str(), students[j].s3.c_str(), students[j].s4.c_str(), students[j].s5.c_str(), students[j].s6.c_str(), students[j].s7.c_str(), students[j].d1, students[j].d2, students[j].d3, (students[j].d1 + students[j].d2 + students[j].d3) / 3, students[j].d1 + students[j].d2 + students[j].d3);
        }
    }
    cout << "Good bye!" << endl;
    return 0;
}
