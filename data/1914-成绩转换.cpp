#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin >> i;
    if (i >= 90 & i <= 100)
        cout << "A" << endl;
    else if (i >= 80 & i <= 89)
        cout << "B" << endl;
    else if (i >= 70 & i <= 79)
        cout << "C" << endl;
    else if (i >= 60 & i <= 69)
        cout << "D" << endl;
    else if (i >= 0 & i <= 59)
        cout << "E" << endl;
    else
        cout << "Score is error!" << endl;
}
