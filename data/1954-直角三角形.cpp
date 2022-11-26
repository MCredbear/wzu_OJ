#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l[n];
    for (int i = 0; i < n; i++)
        cin >> l[i];
    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        for (int a = 1; a <= l[i]; a++)
            for (int b = 1; b <= a - 1; b++)
                for (int c = 1; c <= b - 1; c++)
                    if (a * a == (b * b + c * c))
                        ans++;
        cout << "case#" << i + 1 << endl;
        cout << ans << endl;
    }
    return 0;
}
