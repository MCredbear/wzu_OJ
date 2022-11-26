#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.length() >= 8 & s.length() <= 16)
        {
            bool A = 0, a = 0, N = 0, S = 0;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] >= 'A' & s[j] <= 'Z')
                    A = 1;
                else if (s[j] >= 'a' & s[j] <= 'z')
                    a = 1;
                else if (s[j] >= '0' & s[j] <= '9')
                    N = 1;
                else if (s[j] == '~' | s[j] == '!' | s[j] == '@' | s[j] == '#' | s[j] == '$' | s[j] == '%' | s[j] == '^')
                    S = 1;
            }
            if (A + a + N + S >= 3)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
