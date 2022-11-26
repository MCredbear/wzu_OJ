#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    char count[128];
    for (int i = 0; i < 128; i++)
        count[i] = 0;
    for (int i = 0; i < s1.length(); i++)
        count[s1[i]]++;
    for (int i = 0; i < s2.length(); i++)
        count[s2[i]]++;
    for (int i = 0; i < 128; i++)
        for (int j = 0; j < count[i]; j++)
            cout << char(i);
    cout << endl;
    return 0;
}
