#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        string s;
        getline(cin, s);
        if (s == "")
            break;
        for (int i = s.length() - 1; i >= 0; i--)
            cout << s[i];
        cout << " " << s.length() << endl;
    }
}
