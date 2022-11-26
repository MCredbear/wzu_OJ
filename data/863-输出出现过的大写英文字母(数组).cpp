#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    vector<char> a;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' & s[i] <= 'Z')
        {
            bool b = true;
            for (int j = 0; j < a.size(); j++)
                if (a[j] == s[i])
                    b = false;
            if (b)
                a.push_back(s[i]);
        }
    }
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}
