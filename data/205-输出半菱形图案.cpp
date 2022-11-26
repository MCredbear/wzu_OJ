#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        int n;
        if (scanf("%d", &n) == EOF)
            break;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i * 2 - 1; j++)
                cout << "*";
            cout << endl;
        }
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 1; j <= i * 2 - 1; j++)
                cout << "*";
            cout << endl;
        }
        cout << endl;
    }
}
