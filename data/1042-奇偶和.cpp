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
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[j] % 2 == 1)
                sum1 += a[j];
            else
                sum2 += a[j];
        }
        cout << sum1 << " " << sum2 << endl;
    }
    return 0;
}
