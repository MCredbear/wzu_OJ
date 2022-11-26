#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int i;
    for (i = a.length() - b.length(); i > 0; i--)
    {
        bool is = true;
        for (int j = i; j < i + b.length(); j++)
            if (a[j] != b[j - i])
                is = false;
        if (is)
            break;
    }
    if (i != 0)
        cout << i << endl;
    else
        cout << -1 << endl;
    return 0;
}
