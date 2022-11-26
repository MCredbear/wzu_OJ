#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0 & m == 0)
            break;
        vector<int> a;
        a.push_back(m);
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        for (int i = 0; i < a.size(); i++)
            for (int j = a.size() - 1; j > i; j--)
                if (a[j - 1] > a[j])
                    swap(a[j - 1], a[j]);
        for (int i = 0; i < a.size() - 1; i++)
            cout << a[i] << ' ';
        cout << a.back() << ' ' << endl;
    }
}
