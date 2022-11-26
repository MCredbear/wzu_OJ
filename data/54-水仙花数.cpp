#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    for (int i = 100; i <= 999; i++)
    {
        if (int(i / 100) * int(i / 100) * int(i / 100) + (int(i / 10) % 10) * (int(i / 10) % 10) * (int(i / 10) % 10) + (i % 10) * (i % 10) * (i % 10) == i)
            nums.push_back(i);
    }
    for (;;)
    {
        int a, b;
        if (scanf("%d %d", &a, &b) == EOF)
            break;
        vector<int> ans;
        for (int i = a; i <= b; i++)
        {
            bool existed = false;
            for (int j = 0; j < nums.size(); j++)
                if (nums[j] == i)
                {
                    existed = true;
                    break;
                }
            if (existed)
                ans.push_back(i);
        }
        if (ans.size() > 0)
        {
            for (int i = 0; i < ans.size() - 1; i++)
                cout << ans[i] << " ";
            cout << ans.back() << endl;
        }
        else
            cout << "no" << endl;
    }
}
