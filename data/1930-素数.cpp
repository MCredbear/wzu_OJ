#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        bool b = true;
        for (int j = 2; j <= sqrt(a[i]); j++)
            if (a[i] % j == 0)
                b = false;
        if (b)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
