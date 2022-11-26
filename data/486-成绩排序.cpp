#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1[5], s2[5];
    double d1[5], d2[5], d3[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> s1[i] >> s2[i] >> d1[i] >> d2[i] >> d3[i];
    }
    for (int i = 0; i < 5; i++)
        for (int j = 4; j > i; j--)
        {
            if ((d1[j] + d2[j] + d3[j]) / 3 < (d1[j - 1] + d2[j - 1] + d3[j - 1]) / 3)
            {
                swap(s1[j - 1], s1[j]);
                swap(s2[j - 1], s2[j]);
                swap(d1[j - 1], d1[j]);
                swap(d2[j - 1], d2[j]);
                swap(d3[j - 1], d3[j]);
            }
        }
    for (int i = 0; i < 5; i++)
    {
        printf("%s %s %.1lf %.1lf %.1lf %.1lf\n", s1[i].c_str(), s2[i].c_str(), d1[i], d2[i], d3[i], (d1[i] + d2[i] + d3[i]) / 3);
    }
}
