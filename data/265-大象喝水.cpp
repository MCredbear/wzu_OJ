#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double h, r;
        cin >> h >> r;
        int ans = 20000 / (r * r * 3.14159 * h) + 1;
        cout << ans << endl;
    }
}
