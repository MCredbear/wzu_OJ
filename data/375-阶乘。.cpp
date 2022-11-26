#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int sum = 1;
        for (int j = 2; j <= m; j++)
            sum *= j;
        cout << sum << endl;
    }
    return 0;
}
