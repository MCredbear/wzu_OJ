#include <bits/stdc++.h>
using namespace std;

class Cow
{
public:
    int old = 1;
};

int main()
{
    int year;
    vector<int> ans;
    for (;;)
    {
        cin >> year;
        if (year != 0)
        {
            vector<Cow> cows;
            cows.push_back(Cow());
            cows[0].old = 4;
            for (int i = 2; i <= year; i++)
            {
                for (int j = 0; j < cows.size(); j++)
                {
                    if (cows[j].old >= 4)
                        cows.push_back(Cow());
                }
                for (int j = 0; j < cows.size(); j++)
                {
                    cows[j].old++;
                }
            }
            ans.push_back(cows.size());
        }
        else
            break;
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
}
