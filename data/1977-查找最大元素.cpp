#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        string s;
        getline(cin, s);
        if (!s.empty())
        {
            char _max;
            for (int i = 0; i < s.length(); i++)
                _max = max(_max, s[i]);
            for (int i = 0; i < s.length(); i++)
                if (s[i] == _max)
                {
                    s.insert(i + 1, "(max)");
                    i += 5;
                }
            cout << s << endl;
        }
        else
            return 0;
    }
}
