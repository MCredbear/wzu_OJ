#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int _a[a];
        _a[0] = 1;
        _a[1] = 1;
        for (int j = 2; j < a; j++)
            _a[j] = _a[j - 1] + _a[j - 2];
        ans[i] = _a[a - 1];
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << endl;
    return 0;
}
