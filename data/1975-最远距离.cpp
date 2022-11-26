#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double x[n], y[n];
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    double _max = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            _max = max(_max, sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j])));
    printf("%.4lf\n", _max);
    return 0;
}
