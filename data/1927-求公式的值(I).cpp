#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double r = 0;
    for (double i = 1; i <= n; i++)
        r += 1 / i;
    printf("%.3lf\n", r);
    return 0;
}
