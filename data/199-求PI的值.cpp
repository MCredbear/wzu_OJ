#include <bits/stdc++.h>
using namespace std;

int main()
{
    double PI = 1;
    double a = 2, b = 1;
    for (int i = 1; i <= 200; i++)
    {
        PI *= (a / b);
        if (i % 2 == 1)
            b += 2;
        else
            a += 2;
    }
    PI *= 2;
    printf("%.3lf\n", PI);
}
