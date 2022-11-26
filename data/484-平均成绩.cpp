#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        string s1, s2;
        double d1, d2, d3;
        cin >> s1 >> s2 >> d1 >> d2 >> d3;
        printf("%s %s %.1lf %.1lf %.1lf %.1lf\n", s1.c_str(), s2.c_str(), d1, d2, d3, (d1 + d2 + d3) / 3);
    }
}
