#include <bits/stdc++.h>
using namespace std;

class Monkey
{
public:
    Monkey(int id) : id(id) {}
    int id;
};

int main()
{
    int n;
    cin >> n;
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("\n%d\n", &m);
        int nums[m];
        for (int j = 0; j < m; j++)
            scanf("%d", &nums[j]);
        ans[i] = -pow(2,15)+1;
        for (int j = 0; j < m; j++)
            ans[i] = max(ans[i], nums[j]);
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << endl;
    return 0;
}
