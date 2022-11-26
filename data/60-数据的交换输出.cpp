#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int _min = pow(2, 15) - 1, p;
        for (int i = 0; i < n; i++)
            if (a[i] < _min)
            {
                _min = a[i];
                p = i;
            }
        swap(a[0], a[p]);
        for (int i = 0; i < n - 1; i++)
            cout << a[i] << " ";
        cout << a[n - 1] << endl;
    }
}
