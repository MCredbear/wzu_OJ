#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int sum = 0;
};

int main()
{
    int n;
    cin >> n;
    Student students[n];
    string max_name;
    int max_sum = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        int edS, classS, article;
        string name, officer, western;
        cin >> students[i].name >> edS >> classS >> officer >> western >> article;
        if (edS > 80 & article > 0)
            students[i].sum += 8000;
        if (edS > 85 & classS > 80)
            students[i].sum += 4000;
        if (edS > 90)
            students[i].sum += 2000;
        if (edS > 85 & western == "Y")
            students[i].sum += 1000;
        if (classS > 80 & officer == "Y")
            students[i].sum += 850;
        sum += students[i].sum;
        if (students[i].sum > max_sum)
        {
            max_sum = students[i].sum;
            max_name = students[i].name;
        }
    }
    cout << max_name << endl
         << max_sum << endl
         << sum << endl;
}
