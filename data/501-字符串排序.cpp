#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
        for (int j = n - 1; j > i; j--)
            if (s[j - 1] > s[j])
                swap(s[j - 1], s[j]);
    for (int i = 0; i < n; i++)
        cout << s[i] << endl;
    return 0;
}
