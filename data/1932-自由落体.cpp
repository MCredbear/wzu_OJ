#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, n;
    cin >> h >> n;
    double ans = h;
    for (int i = 1; i < n; i++)
        ans += h / pow(2, i - 1);
    printf("%.6lf\n", ans);
    return 0;
}
