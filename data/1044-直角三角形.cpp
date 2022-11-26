#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        int count = 0;
        for (int _a = 1; _a <= a; _a++)
            for (int _b = 1; _b < _a; _b++)
                for (int _c = 1; _c < _b; _c++)
                    count += (_a * _a == _b * _b + _c * _c);
        cout << "case#" << i << endl
             << count << endl;
    }
    return 0;
}
