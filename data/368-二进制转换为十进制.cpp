#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int ans = 0;
        for (int j = s.length() - 1; j >= 0; j--)
            ans += pow(2, s.length() - j - 1) * (s[j] - 48);
        cout << ans << endl;
    }
}
