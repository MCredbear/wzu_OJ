#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    int h;
    cin >> h;
    h += 30;
    int count = 0;
    for (int i = 0; i < 10; i++)
        if (a[i] <= h)
            count++;
    cout << count << endl;
}
