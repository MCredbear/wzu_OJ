#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    while (scanf("%lf %lf", &a, &b) != EOF) /*输入a、b，直到文件尾*/
    {
        printf("%.2lf\n", a - b);
    }
}
