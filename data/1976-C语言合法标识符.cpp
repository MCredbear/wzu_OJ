#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    getline(cin, n);
    for (int i = 0; i < atoi(n.c_str()); i++)
    {
        string s;
        getline(cin, s);
        if ((s[0] >= 'a' & s[0] <= 'z') | (s[0] >= 'A' & s[0] <= 'Z') | (s[0] == '_'))
        {
            int j;
            for (j = 0; j < s.length(); j++)
                if (!((s[j] >= 'a' & s[j] <= 'z') | (s[j] >= 'A' & s[j] <= 'Z') | (s[j] == '_') | (s[j] >= '0' & s[j] <= '9')))
                {
                    cout << "no" << endl;
                    break;
                }
            if (j == s.length())
                cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
    }
}
