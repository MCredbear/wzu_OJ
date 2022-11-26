#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        double d1 = abs(atan(y1 / x1));
        if (y1 < 0)
            d1 += M_PI;
        double d2 = abs(atan(y2 / x2));
        if (y2 < 0)
            d2 += M_PI;
        double res = abs(d1 - d2) * double(180) / M_PI;
        if (res > 180)
            res = 360 - res;
        printf("%.2lf\n", res);
    }
}
