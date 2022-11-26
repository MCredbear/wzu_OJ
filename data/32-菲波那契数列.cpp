#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[47];
    a[0] = 0;
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= 46; i++)
        a[i] = a[i - 1] + a[i - 2];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        cout << a[p] << endl;
    }
}
