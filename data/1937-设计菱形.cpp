#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= (n + 1) / 2; i++)
    {
        for (int j = 1; j <= (n - i * 2 + 1) / 2; j++)
            cout << "-";
        for (int j = 1; j <= i * 2 - 1; j++)
            cout << "*";
        for (int j = 1; j <= (n - i * 2 + 1) / 2; j++)
            cout << "-";
        cout << endl;
    }
    for (int i = (n - 1) / 2; i >= 1; i--)
    {
        for (int j = (n - i * 2 + 1) / 2; j >= 1; j--)
            cout << "-";
        for (int j = i * 2 - 1; j >= 1; j--)
            cout << "*";
        for (int j = (n - i * 2 + 1) / 2; j >= 1; j--)
            cout << "-";
        cout << endl;
    }
    return 0;
}
