#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        double sa;
        cin >> sa;
        double sa1 = 1000;
        if (sa <= 10000)
            sa1 += sa * 0.05;
        else
        {
            if (sa <= 50000)
            {
                sa1 += sa * 0.075;
            }
            else
            {
                if (sa <= 200000)
                    sa1 += sa * 0.085;
                else
                {
                    sa1 += sa * 0.1;
                }
            }
        }
        printf("%.3lf\n", sa1);
    }
}
