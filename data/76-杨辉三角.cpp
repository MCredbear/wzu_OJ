#include <bits/stdc++.h>
using namespace std;

inline int factorial(int n)
{
    int r = 1;
    for (int i = 2; i <= n; i++)
        r *= i;
    return r;
}

int main()
{
    for (;;)
    {
        int num;
        if (scanf("%d", &num) == EOF)
            break;
        for (int j = 1; j <= num; j++)
        {
            cout << 1;
            for (int k = 2; k <= j; k++)
                cout << " " << int(factorial(j - 1) / ((factorial(k - 1) * factorial(j - k))));
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
