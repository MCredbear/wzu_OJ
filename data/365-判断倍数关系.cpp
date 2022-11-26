#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a;
        cin >> b;
        if (b == 0)
        {
            if (a == 0)
            {
                cout << 1 << endl;
                continue;
            }
            else
            {
                cout << 0 << endl;
                continue;
            }
        }
        if (abs(a) % abs(b) == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
