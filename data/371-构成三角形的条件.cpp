#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double a, b, c;
        cin >> a >> b >> c;
        if ((a + b) > c & (a + c) > b & (b + c) > a)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
