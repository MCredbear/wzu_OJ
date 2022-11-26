#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double h, m, s;
        cin >> h >> m >> s;
        double dH, dM;
        dM = 360 * (m + s / 60) / 60;
        if (h >= 12)
            h -= 12;
        dH = (360 / 12) * h + (360 / 12) * (m * 60 + s) / 3600;
        double res = abs(dH - dM);
        if (res > 180)
            res = 360 - res;
        cout << int(res) << endl;
    }
}
