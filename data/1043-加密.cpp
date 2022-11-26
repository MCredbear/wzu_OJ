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
    while (1)
    {
        string s;
        getline(cin, s);
        if (s != "")
        {
            string _s;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] >= 'a' & s[i] <= 'z')
                {
                    _s.append(toString(s[i] - 96));
                    continue;
                }
                if (s[i] >= 'A' & s[i] <= 'Z')
                {
                    _s.append(toString(s[i] - 64 + 26));
                    continue;
                }
                _s.push_back(s[i]);
            }
            cout << _s << endl;
        }
        else break;
    }

    return 0;
}
