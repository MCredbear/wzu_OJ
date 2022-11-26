#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unsigned int s1[n], s2[n];
    for (int i = 0; i < n; i++)
        cin >> s1[i] >> s2[i];
    for (int i = 0; i < n; i++)
    {
        bool ans = false;
        for (int j = 0; j < 16; j++)
        {
            s1[i] = ((s1[i] << 1) + (s1[i] >> 15)) % 0x10000;
            if (s1[i] == s2[i])
                ans = true;
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
