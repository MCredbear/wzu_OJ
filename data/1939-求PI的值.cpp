#include <bits/stdc++.h>
using namespace std;

int main()
{
    double p = 2, a = 0, b = 1;
    for (int i = 1; i <= 200; i++)
    {
        if (i % 2 == 1)
            a += 2;
        else
            b += 2;
        p *= a / b;
    }
    printf("%.3lf\n", p);
}
