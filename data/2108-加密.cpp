#include <bits/stdc++.h>
using namespace std;

string toString(int number)
{
    string _s;
    if (int(number / 10) + 48 != '0')
        _s.push_back(char(int(number / 10) + 48));
    _s.push_back(char(number % 10 + 48));
    return _s;
}

int main()
{
    int n;
    cin >> n;
    string s[n];
    string _s[n];
    for (int i = -1; i < n; i++)
        getline(cin, s[i]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < s[i].length(); j++)
            if (s[i][j] >= 'a' & s[i][j] <= 'z')
                _s[i].append(toString(s[i][j] - 96));
            else if (s[i][j] >= 'A' & s[i][j] <= 'Z')
                _s[i].append(toString(s[i][j] - 64 + 26));
            else
                _s[i].push_back(s[i][j]);
    for (int i = 0; i < n; i++)
        cout << _s[i] << endl;
    return 0;
}
