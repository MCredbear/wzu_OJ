#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        char x;
        cin >> x;
        if (x != '@')
        {
            int n;
            cin >> n;
            for (int j = 1; j <= n - 1; j++)
                cout << ' ';
            if (n != 1)
            {
                cout << x << endl;
                for (int j = n - 2; j >= 1; j--)
                {
                    for (int k = j; k >= 1; k--)
                        cout << ' ';
                    cout << x;
                    for (int k = (n - j - 1) * 2 - 1; k >= 1; k--)
                        cout << ' ';
                    cout << x << endl;
                }
                for (int j = 1; j <= (n - 1) * 2 + 1; j++)
                    cout << x;
                cout << endl
                     << endl;
            }
            else
                cout << x << endl
                     << endl;
        }
        else
            break;
    }
}
