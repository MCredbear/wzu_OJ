#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    for (int k = 0; k < m; k++)
    {
        double sum = 0;
        double i;
        cin >> i;
        sum += i * 28.9;
        cin >> i;
        sum += i * 32.7;
        cin >> i;
        sum += i * 45.6;
        cin >> i;
        sum += i * 78;
        cin >> i;
        sum += i * 35;
        cin >> i;
        sum += i * 86.2;
        cin >> i;
        sum += i * 27.8;
        cin >> i;
        sum += i * 43;
        cin >> i;
        sum += i * 56;
        cin >> i;
        sum += i * 65;
        printf("%.2lf\n", sum);
    }
}
