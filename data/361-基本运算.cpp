#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << a + b + c << " " << int((a + b + c) / 3) << " " << a * b * c << " " << min(a, min(b, c)) << " " << max(a, max(b, c)) << endl;
    }
}
