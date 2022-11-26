#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1 = 0, a5 = 0, a10 = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        switch (tmp)
        {
        case 1:
            a1++;
            break;
        case 5:
            a5++;
            break;
        case 10:
            a10++;
            break;
        }
    }
    cout << a1 << endl
         << a5 << endl
         << a10 << endl;
}
