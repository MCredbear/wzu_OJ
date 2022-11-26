#include <bits/stdc++.h>
using namespace std;

int find(int a)
{
    if (a == 1)
        return 1;
    int sum = 1;
    for (int i = 1; i <= a / 2; i++)
        sum += find(i);
    return sum;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cout << find(a)<< endl;
    }
}
