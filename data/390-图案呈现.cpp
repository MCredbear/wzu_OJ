#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        string s[m];
        for (int j = 1; j <= m; j++)
        {
            for (int k = 0; k < j; k++)
                s[j - 1].push_back('*');
            for (int k = 0; k < m - j + 1; k++)
                s[j - 1].push_back('-');
            for (int k = 0; k < m - j + 1; k++)
                s[j - 1].push_back('*');
            for (int k = 0; k < j - 1; k++)
                s[j - 1].push_back('-');
        }
        for (int j = 0; j < m; j++)
        {
            cout << s[j] << endl;
        }
    }
    return 0;
}
