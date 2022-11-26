#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    for (int k = 0; k < m; k++)
    {
        int n;
        int sum = 0;
        cin >> n;
        for (int i = 0; i < 5; i++)
        {
            int tmp;
            cin >> tmp;
            if (tmp < n)
                sum += tmp;
        }
        cout << sum << endl;
    }
}
