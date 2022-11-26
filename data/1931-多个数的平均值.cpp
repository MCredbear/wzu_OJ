#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double ans[n];
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        double nums[m];
        double sum = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> nums[j];
            sum += nums[j];
        }
        ans[i] = sum / m;
    }
    for (int i = 0; i < n; i++)
        printf("%.2lf\n", ans[i]);
    return 0;
}
