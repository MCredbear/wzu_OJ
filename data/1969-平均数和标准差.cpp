#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> ans1, ans2;
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("\n%d", &m);
        double in[m];
        for (int j = 0; j < m; j++)
            scanf(" %lf", &in[j]);
        double sum = 0;
        for (int j = 0; j < m; j++)
            sum += in[j];
        double _ans1 = sum / m;
        sum = 0;
        for (int j = 0; j < m; j++)
            sum += (in[j] - _ans1) * (in[j] - _ans1);
        double _ans2 = sqrt(sum / m);
        ans1.push_back(_ans1);
        ans2.push_back(_ans2);
    }
    for (int i = 0; i < n; i++)
        printf("%.3lf %.3lf\n", ans1[i], ans2[i]);
    return 0;
}
