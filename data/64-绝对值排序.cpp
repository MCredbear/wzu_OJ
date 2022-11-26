#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            for (int j = n - 1; j > i; j--)
                if (abs(a[j]) < abs(a[j - 1]))
                    swap(a[j], a[j - 1]);
        for (int i = n - 1; i > 0; i--)
            cout << a[i] << " ";
        cout << a[0] << endl;
    }
}
