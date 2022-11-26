#include <bits/stdc++.h>
using namespace std;

void sum(vector<int> &a, vector<int> &sums, int i)
{
    if (i == a.size() - 1)
        return;
    for (int j = i + 1; j < a.size(); j++)
        sums.push_back(a[i] + a[j]);
    sum(a, sums, i + 1);
}

int main()
{
    while (1)
    {
        int n, m;
        if (scanf("%d %d", &n, &m) == EOF)
            break;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        vector<int> sums;
        sum(a, sums, 0);
        sort(sums.begin(), sums.end());
        for (int i = sums.size() - 1; i > sums.size() - m - 1; i--)
            cout << sums[i] << " ";
        cout << endl;
    }
}
