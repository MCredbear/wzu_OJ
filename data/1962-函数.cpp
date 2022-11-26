#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0, a = 1;
    for (int i = 2; i <= n + 1; i++)
    {
        sum += 1 / a;
        a += i;
    }
    printf("%.3lf\n", sum);
}
