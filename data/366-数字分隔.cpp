#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (1)
    {
        string s;
        cin >> s;
        if (s == "0")
            break;
        for (int i = 0; i < s.length() - 1; i++)
            cout << s[i] << "---";
        cout << s[s.length() - 1] << endl;
    }
    return 0;
}
