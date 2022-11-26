#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        int n, x;
        cin >> n >> x;
        if (n == 0 & x == 0)
            break;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        a[n] = x;
        sort(a, a + n + 1);
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << a[n] << endl;
    }
}
