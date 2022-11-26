#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int tmp, _min = pow(2, 15) - 1;
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            if (_min > tmp)
                _min = tmp;
        }
        cout << _min << endl;
    }
    return 0;
}
