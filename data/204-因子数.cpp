#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int ans, _max = 0;
        for (int j = a; j <= b; j++)
        {
            int count = 0;
            for (int k = 1; k <= j; k++)
                if (j % k == 0)
                    count++;
            if (count > _max)
            {
                _max = count;
                ans = j;
            }
        }
        cout << ans << endl;
    }
}
