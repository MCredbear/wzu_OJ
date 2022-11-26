#include <bits/stdc++.h>
using namespace std;

int splite(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return splite(n - 1) + splite(n - 2);
}

int main()
{
    int n;
    for (;;)
    {
        if (scanf("%d", &n) == EOF)
            break;
        cout << splite(n) << endl;
    }
}
