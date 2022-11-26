#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
        cout << "0 0\n";
    else
    {
        {
            int rabit, chicken;
            rabit = n / 4;
            chicken = (n - rabit * 4) / 2;
            cout << rabit + chicken;
        }
        {
            cout << " " << n / 2 << endl;
        }
    }

    return 0;
}
