#include <bits/stdc++.h>
using namespace std;

int main()
{
    double i;
    cin >> i;
    if (i >= -5 & i < 0)
        printf("%.3lf\n", 8 / (i * i + i + 1));
    else if (i >= 0 & i < 5)
        printf("%.3lf\n", 7 / (i * i + i + 1));
    else if (i >= 5 & i < 10)
        printf("%.3lf\n", 2 / (i + 8));
    else
        printf("%.3lf\n", 0);
}
