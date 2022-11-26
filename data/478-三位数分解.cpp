#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cout << int(a / 100) << " " << int(a / 10) % 10 << " " << a % 10 << endl;
    }
    return 0;
}
