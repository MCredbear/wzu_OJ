#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int _max;
        for (int j = 1; j <= min(a, b); j++)
            if (a % j == 0 & b % j == 0)
                _max = j;
        cout << _max << ' ';
        for (int j = max(a, b);; j++)
            if (j % a == 0 & j % b == 0)
            {
                cout << j << endl;
                break;
            }
    }
}
