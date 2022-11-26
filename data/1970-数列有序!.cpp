#include <bits/stdc++.h>
using namespace std;

string toString(int a)
{
    string s;
    for (int i = int(log10(a)); i >= 0; i--)
    {
        s.append(new char(a / pow(10, i) + 48));
        a %= int(pow(10, i));
    }
    return s;
}

int main()
{
    vector<string> ans;
    while (1)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        if (n == 0 & m == 0)
            break;
        int s[n + 1];
        for (int i = 0; i < n; i++)
            scanf("%d", &s[i]);
        s[n] = m;
        sort(s, s + n + 1);
        string _ans;
        for (int i = 0; i < n; i++)
            _ans.append(toString(s[i]) + " ");
        _ans.append(toString(s[n]));
        ans.push_back(_ans);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
