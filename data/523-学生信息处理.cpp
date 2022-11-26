#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int type;
    string s2;
    double d1;
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
            cin >> student.s2 >> student.d1;
            student.type = 0;
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
                printf("%s %.2lf\n", students[i].s2.c_str(), students[i].d1);
        }
        else if (students[i].type == 1)
        {
            vector<Student> _students;
            for (int j = 0; j < i; j++)
                if (students[j].type == 0)
                    printf("%s %.2lf\n", students[j].s2.c_str(), students[j].d1);
        }
    }
    cout << "Good bye!" << endl;
    return 0;
}
