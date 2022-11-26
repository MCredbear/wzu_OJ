#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int day;
        cin >> day;
        int count = 1;
        for (int j = 1; j < day; j++)
        {
            count += 1;
            count *= 2;
        }
        cout << count << endl;
    }
}
