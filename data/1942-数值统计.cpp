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
        double a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int b = 0, c = 0, d = 0;
        for (int i = 0; i < n; i++)
            if (a[i] < 0)
                b++;
            else if (a[i] == 0)
                c++;
            else
                d++;
        cout << b << ' ' << c << ' ' << d << endl;
    }
}
