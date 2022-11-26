#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    int y;
    cin >> x >> y;
    if (x >= 'A' & x <= 'Z')
        x = x - 'A' + 1;
    else
        x = -x + 'a' - 1;
    cout << x + y << endl;
    return 0;
}
