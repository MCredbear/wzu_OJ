#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        int x, y;
        if (scanf("%d %d", &x, &y) == EOF)
            break;
        if (x == 0 & y == 0)
            continue;
        int a[y - x + 1];
        for (int i = 0; i < y - x + 1; i++)
            a[i] = pow(i + x, 2) + i + x + 41;
        bool b = true;
        for (int i = 0; i < y - x + 1; i++)
        {

            for (int j = 2; j <= sqrt(a[i]); j++)
                if (a[i] % j == 0)
                {
                    b = false;
                    break;
                }
        }
        if (b)
            cout << "OK" << endl;
        else
            cout << "Sorry" << endl;
    }
}
