#include <bits/stdc++.h>

int calcSumOfNumber(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
