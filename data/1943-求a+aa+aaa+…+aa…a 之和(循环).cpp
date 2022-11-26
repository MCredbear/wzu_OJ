#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a, n, sum = 0;
        cin >> a >> n;
        for (int j = 0; j < n; j++)
        {
            int tmp = 0;
            if (j < 3)
            {
                for (int k = 0; k < j + 1; k++)
                {
                    cout << 'a';
                }
                cout << '+';
            }
            for (int k = 0; k < j + 1; k++)
            {
                tmp = tmp * 10 + a;
            }
            sum += tmp;
        }
        if (n > 3)
            cout << "...";
        cout << "=" << sum << endl;
    }
}
