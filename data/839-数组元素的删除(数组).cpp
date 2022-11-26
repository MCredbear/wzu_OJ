#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    int m;
    cin >> m;
    for (vector<int>::iterator i = a.begin(); i != a.end(); i++)
        if (*i == m)
        {
            a.erase(i);
            i--;
        }
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << ' ';
    cout << endl;
}
