#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int type;
    string s1, s2, s3, s4;
    int d1, d2, d3;
};

string toLowCase(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 'A' & s[i] <= 'Z')
            s[i] += 32;
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
        if (Insert == "Insert")
        {
            cin >> student.s2 >> student.s3 >> student.s4 >> student.d1 >> student.d2 >> student.d3;
            student.type = 0;
        }
        else if (Insert == "Find")
        {
            cin >> student.s2;
            student.type = 2;
        }
        else if (Insert == "Delete")
        {
            cin >> student.s2;
            student.type = 3;
        }
        else if (Insert == "Change")
        {
            cin >> student.s1 >> student.s2 >> student.s3 >> student.s4 >> student.d1 >> student.d2 >> student.d3;
            student.type = 4;
        }
        else if (Insert == "Statistics")
        {
            student.type = 5;
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
                printf("Inserted\n");
        }
        else if (students[i].type == 2)
        {
            int j;
            for (j = 0; j < i; j++)
            {
                if (students[j].type == 0 & (toLowCase(students[j].s2) == toLowCase(students[i].s2) | toLowCase(students[j].s3) == toLowCase(students[i].s2)))
                {
                    printf("%s %s %s %d %d %d %d\n", toLowCase(students[j].s2).c_str(), students[j].s3.c_str(), students[j].s4.c_str(), students[j].d1, students[j].d2, students[j].d3, (students[j].d1 + students[j].d2 + students[j].d3));
                    break;
                }
            }
            if (j == i)
                cout << "Failed" << endl;
        }
        else if (students[i].type == 3)
        {
            int j;
            for (j = 0; j < i; j++)
                if (students[j].type == 0 & (students[j].s2 == students[i].s2 | students[j].s3 == students[i].s2))
                {
                    cout << "Deleted" << endl;
                    students[j].type = -1;
                    break;
                }
            if (j == i)
                cout << "Failed" << endl;
        }
        else if (students[i].type == 4)
        {
            int j;
            for (j = 0; j < i; j++)
                if (students[j].type == 0 & (students[j].s2 == students[i].s1 | students[j].s3 == students[i].s1))
                {
                    students[j] = students[i];
                    students[j].type = 0;
                    cout << "Changed" << endl;
                }
            if (j == i)
                cout << "Failed" << endl;
        }
        else if (students[i].type == 5)
        {
            vector<Student> _students;
            for (int j = 0; j < i; j++)
                if (students[j].type == 0)
                    _students.push_back(students[j]);
            for (int j = 0; j < _students.size(); j++)
                for (int k = _students.size() - 1; k > j; k--)
                    if (_students[k - 1].s3 > _students[k].s3)
                        swap(_students[k - 1], _students[k]);
            for (int j = 0; j < _students.size(); j++)
                printf("%s %s %s %d %d %d %d\n", toLowCase(_students[j].s2).c_str(), _students[j].s3.c_str(), _students[j].s4.c_str(), _students[j].d1, _students[j].d2, _students[j].d3, _students[j].d1 + _students[j].d2 + _students[j].d3);
            double a1 = 0, a2 = 0, a3 = 0;
            for (int j = 0; j < _students.size(); j++)
            {
                a1 += _students[j].d1;
                a2 += _students[j].d2;
                a3 += _students[j].d3;
            }
            printf("%.1lf %.1lf %.1lf\n", double(a1) / _students.size(), double(a2) / _students.size(), double(a3) / _students.size());
            int b1 = 0, b2 = 0, b3 = 0;
            for (int j = 0; j < _students.size(); j++)
            {
                b1 += _students[j].d1 < 60;
                b2 += _students[j].d2 < 60;
                b3 += _students[j].d3 < 60;
            }
            int c1 = 0, c2 = 0, c3 = 0;
            cout << b1 << " " << b2 << " " << b3 << endl;
            for (int j = 0; j < _students.size(); j++)
            {
                c1 += _students[j].d1 >= 90;
                c2 += _students[j].d2 >= 90;
                c3 += _students[j].d3 >= 90;
            }
            cout << c1 << " " << c2 << " " << c3 << endl;
        }
    }
    cout << "Good bye!" << endl;
    return 0;
}
