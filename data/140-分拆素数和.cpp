#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    for (int i = 2; i <= 2000; i++)
    {
        bool b = true;
        for (int j = 2; j <= sqrt(i); j++)
            if (i % j == 0)
                b = false;
        if (b)
            nums.push_back(i);
    }
    vector<int> ans;
    while (1)
    {
        int a;
        cin >> a;
        if (a != 0)
        {
            int count = 0;
            for (int i = 0; i < nums.size(); i++)
                for (int j = 0; j < nums.size(); j++)
                    if (nums.at(i) + nums.at(j) == a)
                        count++;
            ans.push_back(count / 2);
        }
        else
            break;
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans.at(i) << endl;
    return 0;
}
