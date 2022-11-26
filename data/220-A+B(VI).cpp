#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        int n;
        if (scanf("%d", &n) == EOF)
            break;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            sum += tmp;
        }
        cout << sum << endl;
    }
}
