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
        else if (Insert == "INSERT")
        {
            cin >> student.s2 >> student.s3 >> student.s4 >> student.d1 >> student.d2 >> student.d3;
            student.type = 0;
        }
        else if (Insert == "FIND")
        {
            cin >> student.s2;
            student.type = 2;
        }
        else if (Insert == "DELETE")
        {
            cin >> student.s2;
            student.type = 3;
        }
        students.push_back(student);
    }
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].type == 0)
        {
            bool existed = false;
            for (int j = 0; j < i; j++)
                if (students[j].type == 0 & students[j].s2 == students[i].s2)
                {
                    existed = true;
                    break;
                }
            if (existed)
            {
                students[i].type = -1;
                cout << "Failed" << endl;
            }
            else
                printf("%s %s %s %.2lf %.2lf %.2lf %.2lf %.2lf\n", students[i].s2.c_str(), students[i].s3.c_str(), students[i].s4.c_str(), students[i].d1, students[i].d2, students[i].d3, (students[i].d1 + students[i].d2 + students[i].d3) / 3, students[i].d1 + students[i].d2 + students[i].d3);
        }
        else if (students[i].type == 1)
        {
            vector<Student> _students;
            for (int j = 0; j < i; j++)
                if (students[j].type == 0)
                    _students.push_back(students[j]);
            for (int j = 0; j < _students.size(); j++)
                for (int k = _students.size() - 1; k > j; k--)
                    if (_students[k - 1].s2 > _students[k].s2)
                        swap(_students[k - 1], _students[k]);
            for (int j = 0; j < _students.size(); j++)
                printf("%s %s %s %.2lf %.2lf %.2lf %.2lf %.2lf\n", _students[j].s2.c_str(), _students[j].s3.c_str(), _students[j].s4.c_str(), _students[j].d1, _students[j].d2, _students[j].d3, (_students[j].d1 + _students[j].d2 + _students[j].d3) / 3, _students[j].d1 + _students[j].d2 + _students[j].d3);
        }
        else if (students[i].type == 2)
        {
            int j;
            for (j = 0; j < i; j++)
                if (students[j].type == 0 & students[j].s2 == students[i].s2)
                {
                    printf("%s %s %s %.2lf %.2lf %.2lf %.2lf %.2lf\n", students[j].s2.c_str(), students[j].s3.c_str(), students[j].s4.c_str(), students[j].d1, students[j].d2, students[j].d3, (students[j].d1 + students[j].d2 + students[j].d3) / 3, students[j].d1 + students[j].d2 + students[j].d3);
                    break;
                }
            if (j == i)
                cout << "Failed" << endl;
        }
        else if (students[i].type == 3)
        {
            int j;
            for (j = 0; j < i; j++)
                if (students[j].type == 0 & students[j].s2 == students[i].s2)
                {
                    cout << "Deleted" << endl;
                    students[j].type = -1;
                    break;
                }
            if (j == i)
                cout << "Failed" << endl;
        }
    }
    cout << "Good bye!" << endl;
    return 0;
}
