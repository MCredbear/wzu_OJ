#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    printf("%.2lf\n", min(a, min(b, c)));
}
