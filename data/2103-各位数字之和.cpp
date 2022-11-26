#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n.length(); i++)
        ans += n[i] - 48;
    cout << ans << endl;
    return 0;
}
