#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int _min = pow(2, 15) - 1, p;
    for (int i = 0; i < n; i++)
    {
        if (_min > a[i])
        {
            _min = a[i];
            p = i;
        }
    }
    cout << _min << " " << p << endl;
    return 0;
}
