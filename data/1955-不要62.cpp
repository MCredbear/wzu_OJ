#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ans;
    while (1)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0 & m == 0)
            break;
        int _ans = 0;
        for (int i = n; i <= m; i++)
        {
            bool b = true;
            for (int j = 1; j <= int(log10(i) + 1); j++)
                if (int(i / pow(10, j - 1)) % 10 == 4)
                    b = false;
            for (int j = 1; j <= int(log10(i)); j++)
                if (int(i / pow(10, j - 1)) % 100 == 62)
                    b = false;
            _ans += b;
        }
        ans.push_back(_ans);
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans.at(i) << endl;
    return 0;
}
