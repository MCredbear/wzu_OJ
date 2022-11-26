#include <bits/stdc++.h>
using namespace std;

inline int factorial(int n)
{
    int r = 1;
    for (int i = 2; i <= n; i++)
        r *= i;
    return r;
}

int main()
{
    string s;
    getline(cin, s);
    vector<int> nums;
    int i, j = 0;
    for (i = 0; i < s.length(); i++)
        if (s[i] == ' ')
        {
            nums.push_back(atoi(s.substr(j, i - j).c_str()));
            j = i + 1;
        }
    nums.push_back(atoi(s.substr(j, i - j).c_str()));
    for (i = 0; i < nums.size(); i++)
    {
        for (j = 1; j <= nums[i]; j++)
        {
            cout << 1;
            for (int k = 2; k <= j; k++)
                cout << " " << int(factorial(j - 1) / ((factorial(k - 1) * factorial(j - k))));
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
