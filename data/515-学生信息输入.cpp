#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    double d1, d2, d3;
    cin >> s1 >> s2 >> s3 >> d1 >> d2 >> d3;
    printf("%s %s %s %.2lf %.2lf %.2lf %.2lf %.2lf\n", s1.c_str(), s2.c_str(), s3.c_str(), d1, d2, d3, (d1 + d2 + d3) / 3, d1 + d2 + d3);
}
