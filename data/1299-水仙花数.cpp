#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%1d%1d%1d", &a, &b, &c);
    if (a * a * a + b * b * b + c * c * c == a * 100 + b * 10 + c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
