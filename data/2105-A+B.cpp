#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int a, b, p, type;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '+' | s[i] == '-' | s[i] == '*' | s[i] == '/')
        {
            type = s[i];
            p = i;
        }
    a = atoi(s.substr(0, p).c_str());
    b = atoi(s.substr(p + 1).c_str());
    switch (type)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << int(a / b) << endl;
    }
}
