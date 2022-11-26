#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (;;)
    {
        int a, b;
        if (scanf("%x %x", &a, &b) != EOF)
        {
            if (a + b < 0)
                printf("-%X\n", abs(a + b));
            else
                printf("%X\n", a + b);
        }
        else
            break;
    }
}
