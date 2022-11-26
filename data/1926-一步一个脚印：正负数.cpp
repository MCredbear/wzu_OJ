#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cin >> a;
    if ((a >= 'A' & a <= 'Z') | (a >= 'a' & a <= 'z'))
        cout << 1 << endl;
    else if (a >= '0' & a <= '9')
        cout << 0 << endl;
    else
        cout << -1 << endl;
}
