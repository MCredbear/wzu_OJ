#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        int n;
        if (scanf("%d", &n) == EOF)
            break;
        double a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        double r = 0;
        for (int i = 0; i < n; i++)
            r += a[i];
        r /= double(n);
        printf("%.2lf\n", r);
    }
}
