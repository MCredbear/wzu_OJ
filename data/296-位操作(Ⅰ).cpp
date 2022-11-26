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
        long long a = atoi(s.c_str());
        a = (a % 0x100) >> 4;
        cout << a << endl;
    }
}
