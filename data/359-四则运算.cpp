#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << a + b << " " << a * b << " " << a - b << " " << int(a / b) << endl;
    }
}
