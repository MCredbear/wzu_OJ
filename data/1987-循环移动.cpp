#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int s[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
    for (int i = 0; i < m; i++)
    {
        int pre = s[n - 1];
        for (int j = 0; j < n; j++)
            swap(s[j], pre);
    }
    for (int i = 0; i < n - 1; i++)
        cout << s[i] << " ";
    cout << s[n - 1] << endl;
}
