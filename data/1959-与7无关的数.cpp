#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        bool is7 = true;
        int tmp = i;
        for (int j = 0; j <= log10(i); j++)
        {
            int _tmp = tmp % 10;
            if (_tmp == 7)
            {
                is7 = false;
                break;
            }
            tmp /= 10;
        }
        if (i % 7 == 0)
            is7 = false;
        if (is7)
            ans.push_back(i);
    }
    int sum = 0;
    for (int i = 0; i < ans.size(); i++)
        sum += ans[i] * ans[i];
    cout << sum << endl;
}
