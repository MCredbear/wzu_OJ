#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ans;
    for (int i = 1; i <= 99; i++)
    {
        int s = i * i;
        if (i == s % int(pow(10, int(log10(i)) + 1)))
            ans.push_back(i);
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans.at(i) << " ";
    cout << endl;
    return 0;
}
