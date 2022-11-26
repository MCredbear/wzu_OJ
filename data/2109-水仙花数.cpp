#include <bits/stdc++.h>
using namespace std;

bool check(int &num)
{
    return (pow(int(num / 100), 3) + pow(int((num % 100) / 10), 3) + pow(int(num % 10), 3) == num);
}

int main()
{
    int n;
    cin >> n;
    int L[n], R[n];
    for (int i = 0; i < n; i++)
        cin >> L[i] >> R[i];
    for (int i = 0; i < n; i++)
    {
        vector<int> nums;
        for (int j = L[i]; j <= R[i]; j++)
            if (check(j))
                nums.push_back(j);
        if (nums.size() == 0)
            cout << "no" << endl;
        else
        {
            cout << nums.at(0);
            for (int j = 1; j < nums.size(); j++)
                cout << " " << nums.at(j);
            cout << endl;
        }
    }
    return 0;
}
