#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        int a[x][y];
        for (int j = 0; j < x; j++)
            for (int k = 0; k < y; k++)
                cin >> a[j][k];
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < x; k++)
                cout << a[k][j]<<" ";
            cout << endl;
        }
        cout << endl;
    }
}
