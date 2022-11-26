#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        if (n == 0)
            cout << 0 << endl;
        if (n < 0)
            cout << -1 << endl;
        if (n > 0)
            cout << 1 << endl;
    }
}
