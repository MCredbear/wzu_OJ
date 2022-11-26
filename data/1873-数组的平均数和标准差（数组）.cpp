#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int a[m];
        for (int j = 0; j < m; j++)
            cin >> a[j];
        double average = 0;
        for (int j = 0; j < m; j++)
            average += a[j];
        average /= m;
        double ans2 = 0;
        for (int j = 0; j < m; j++)
        {
            ans2 += pow(a[j] - average, 2);
        }
        ans2 /= m;
        ans2 = sqrt(ans2);
        printf("%.3lf %.3lf\n", average, ans2);
    }
}
