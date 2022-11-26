#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int m;
        cin >> m;
        int a[m];
        for (int j = 0; j < m; j++)
            cin >> a[j];
        sort(a, a + m);
        cout << a[m - 2] - a[1] << endl
             << endl;
    }
    int m;
    cin >> m;
    int a[m];
    for (int j = 0; j < m; j++)
        cin >> a[j];
    sort(a, a + m);
    cout << a[m - 2] - a[1] << endl;
}
