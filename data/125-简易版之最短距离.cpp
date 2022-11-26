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
        int L = -10000, R = 10000;
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
            L = min(L, a[i]);
            R = max(R, a[i]);
        }
        int _min = INT_MAX;
        for (int k = L; k <= R; k++)
        {
            int sum = 0;
            for (int j = 0; j < m; j++)
            {
                sum += abs(a[j] - k);
            }
            _min = min(_min, sum);
        }
        cout << _min << endl;
    }
}
