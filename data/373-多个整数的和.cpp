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
        int tmp,
            sum = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            sum += tmp;
        }
        cout << sum << endl;
    }
    return 0;
}
