#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = 0;
    int i = 1, x = n / 2, y = 0;
    while (i <= n * n)
    {
        {
            a[x][y] = i;
            if (x == n - 1 & y == 0)
            {
                y = 1;
            }
            else if (x == n - 1)
            {
                x = 0;
                y = y - 1;
            }
            else if (y == 0)
            {
                x = x + 1;
                y = n - 1;
            }
            else if (a[x + 1][y - 1] != 0)
            {
                y = y + 1;
            }
            else
            {
                x = x + 1;
                y = y - 1;
            }
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }
}
