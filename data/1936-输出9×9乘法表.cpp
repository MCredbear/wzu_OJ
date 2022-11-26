#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            int n = i * j;
            if (n < 10)
                printf("%d*%d=%d  ", i, j, n);
            else
                printf("%d*%d=%d ", i, j, n);
        }
        cout << endl;
    }
}
