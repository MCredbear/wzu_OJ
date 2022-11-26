#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        vector<int> a;
        for (int j = 1; j <= i / 2; j++)
            if (i % j == 0)
                a.push_back(j);
        int sum = 0;
        for (int j = 0; j < a.size(); j++)
            sum += a[j];
        if (sum == i)
        {
            cout << i << " its factors are ";
            for (int j = 0; j < a.size(); j++)
                cout << a[j] << " ";
            cout << endl;
        }
    }
}
