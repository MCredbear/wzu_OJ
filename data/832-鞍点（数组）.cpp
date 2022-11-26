#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int a[x][y];
    for (int _x = 0; _x < x; _x++)
        for (int _y = 0; _y < y; _y++)
            cin >> a[_x][_y];
    int ax, ay, av;
    bool is = false;
    for (int _x = 0; _x < x; _x++)
        for (int _y = 0; _y < y; _y++)
        {
            int _max = a[_x][_y];
            for (int i = 0; i < y; i++)
                _max = max(_max, a[_x][i]);
            int _min = a[_x][_y];
            for (int i = 0; i < x; i++)
                _min = min(_min, a[i][_y]);
            if (a[_x][_y] == _max & a[_x][_y] == _min)
            {
                is = true;
                ax = _x;
                ay = _y;
                av = a[_x][_y];
            }
        }
    if (is)
        cout << ax << " " << ay << " " << av << " " << endl;
    else
        cout << "N" << endl;
}
