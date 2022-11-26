#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 2, b = 1;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += double(a) / b;
        a = a + b;
        b = a - b;
    }
    printf("%.4lf\n", sum);
}
