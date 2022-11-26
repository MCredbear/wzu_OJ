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
        if (Insert == "Sort")
        {
            student.type = 6;
            cin >> student.s2;
        }
        if (Insert == "Delete")
        {
            student.type = 5;
            cin >> student.s2;
        }
        if (Insert == "Change")
        {
            student.type = 4;
            cin >> student.s2 >> student.s3 >> student.s4 >> student.s5 >> student.s6 >> student.s7 >> student.d1 >> student.d2 >> student.d3;
        }
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
        if (students[i].type == 6)
        {
            int j;
            int k;
            if (students[i].s2 == "byid")
                for (j = 0; j < i; j++)
                {
                    int p;
                    for (k = i - 1; k > j; k--)
                        if (students[k].type == 1)
                        {
                            p = k;
                            break;
                        }
                    for (; k > j; k--)
                        if (students[k].type == 1)
                        {
                            if (students[k].s2 > students[p].s2)
                            {
                                swap(students[k], students[p]);
                                p = k;
                            }
                            else
                            {
                                p = k;
                            }
                        }
                }
            if (students[i].s2 == "bybirthday")
                for (j = 0; j < i; j++)
                {
                    int p;
                    for (k = i - 1; k > j; k--)
                        if (students[k].type == 1)
                        {
                            p = k;
                            break;
                        }
                    for (; k > j; k--)
                        if (students[k].type == 1)
                        {
                            string s1 = students[k].s5, s2 = students[p].s5;
                            if (students[k].s5 > students[p].s5)
                            {
                                swap(students[k], students[p]);
                            }
                            else if (students[k].s5 == students[p].s5 & atoi(students[k].s6.c_str()) > atoi(students[p].s6.c_str()))
                            {
                                swap(students[k], students[p]);
                            }
                            else if (students[k].s5 == students[p].s5 & atoi(students[k].s6.c_str()) == atoi(students[p].s6.c_str()) & atoi(students[k].s7.c_str()) == atoi(students[p].s7.c_str()))
                            {
                                swap(students[k], students[p]);
                            }
                            p = k;
                        }
                }
            if (students[i].s2 == "bysum")
                for (j = 0; j < i; j++)
                {
                    int p;
                    for (k = i - 1; k > j; k--)
                        if (students[k].type == 1)
                        {
                            p = k;
                            break;
                        }
                    for (; k > j; k--)
                        if (students[k].type == 1)
                            if (students[k].d1 + students[k].d2 + students[k].d3 > students[p].d1 + students[p].d2 + students[p].d3)
                            {
                                swap(students[k], students[p]);
                                p = k;
                            }
                            else
                            {
                                p = k;
                            }
                }
            printf("Sort:\n");
            for (int j = 0; j < i; j++)
                if (students[j].type == 1)
                    printf("%s %s %s %s %s %s %.1lf %.1lf %.1lf %.1lf %.1lf\n", students[j].s2.c_str(), students[j].s3.c_str(), students[j].s4.c_str(), students[j].s5.c_str(), students[j].s6.c_str(), students[j].s7.c_str(), students[j].d1, students[j].d2, students[j].d3, (students[j].d1 + students[j].d2 + students[j].d3) / 3, students[j].d1 + students[j].d2 + students[j].d3);
        }
        if (students[i].type == 5)
        {
            int j;
            for (j = 0; j < i; j++)
                if (students[j].type == 1)
                    if (students[j].s2 == students[i].s2)
                    {
                        printf("Delete:\nDeleted\n");
                        students[j].type = -1;
                        break;
                    }
            if (j == i)
                printf("Delete:\nFailed\n");
        }
        if (students[i].type == 4)
        {
            int j;
            for (j = 0; j < i; j++)
                if (students[j].type == 1)
                    if (students[j].s2 == students[i].s2)
                    {
                        printf("Change:\n%s %s %s %s %s %s %.1lf %.1lf %.1lf %.1lf %.1lf\n", students[i].s2.c_str(), students[i].s3.c_str(), students[i].s4.c_str(), students[i].s5.c_str(), students[i].s6.c_str(), students[i].s7.c_str(), students[i].d1, students[i].d2, students[i].d3, (students[i].d1 + students[i].d2 + students[i].d3) / 3, students[i].d1 + students[i].d2 + students[i].d3);
                        students[j] = students[i];
                        students[j].type = 1;
                        break;
                    }
            if (j == i)
                printf("Change:\nFailed\n");
        }
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
                        students[i].type = -1;
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
