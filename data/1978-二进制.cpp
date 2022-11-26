#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        int n;
        if (scanf("%d", &n) == EOF)
            break;
        vector<int> a;
        while (n > 0)
        {
            a.push_back(n % 2);
            n /= 2;
        }
        for (int i = a.size() - 1; i >= 0; i--)
            cout << a[i];
        cout << endl;
    }
}
