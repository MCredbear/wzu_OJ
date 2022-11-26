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
        sort(a, a + m);
        for (int j = 0; j < m - 1; j++)
            cout << a[j] << " ";
        cout << a[m - 1] << endl;
    }
    return 0;
}
