#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        double n;
        if (scanf("%lf", &n) == EOF)
            break;
        printf("%.8lf\n", exp(n));
    }
}
