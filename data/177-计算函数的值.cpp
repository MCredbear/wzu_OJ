#include <bits/stdc++.h>
using namespace std;

double f(double x, double y)
{
    if (x < 0)
        return x + y;
    else
        return f(x - 1, x + y) + x / y;
}

int main()
{
    for (;;)
    {
        double x, y;
        if (scanf("%lf %lf", &x, &y) != EOF)
            printf("%.2lf\n", f(x, y));
        else
            break;
    }
}
