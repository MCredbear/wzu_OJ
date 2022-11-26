#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double del = b * b - 4 * a * c;
    if (del < 0)
        cout << "no\n";
    else if (del == 0)
        printf("%.2lf\n", -b / (2 * a));
    else
        printf("%.2lf %.2lf\n", (-b + sqrt(del)) / (2 * a), (-b - sqrt(del)) / (2 * a));
    return 0;
}
