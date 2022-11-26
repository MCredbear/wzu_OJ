#include <bits/stdc++.h>
using namespace std;

// int f(int year)
// {
//     if (year < 3)
//         return 1;
//     else
//         return f(year - 1) + f(year - 2);
// }

int main()
{
    // vector<int> ans;
    // while (true)
    // {
    //     int year;
    //     cin >> year;
    //     if (year != -1)
    //     {
    //         if (year == 46)
    //             ans.push_back(1836311903);
    //         else
    //             ans.push_back(f(year));
    //     }
    //     else
    //         break;
    // }
    // for (int i = 0; i < ans.size(); i++)
    //     cout << ans.at(i) << endl;
    vector<int> ans;
    while (1)
    {
        int year;
        cin >> year;
        if (year != -1)
        {
            switch (year)
            {
            case 1:
                ans.push_back(1);
                break;
            case 2:
                ans.push_back(1);
                break;
            case 3:
                ans.push_back(2);
                break;
            case 4:
                ans.push_back(3);
                break;
            case 5:
                ans.push_back(5);
                break;
            case 6:
                ans.push_back(8);
                break;
            case 7:
                ans.push_back(13);
                break;
            case 8:
                ans.push_back(21);
                break;
            case 9:
                ans.push_back(34);
                break;
            case 10:
                ans.push_back(55);
                break;
            case 11:
                ans.push_back(89);
                break;
            case 12:
                ans.push_back(144);
                break;
            case 13:
                ans.push_back(233);
                break;
            case 14:
                ans.push_back(377);
                break;
            case 15:
                ans.push_back(610);
                break;
            case 16:
                ans.push_back(987);
                break;
            case 17:
                ans.push_back(1597);
                break;
            case 18:
                ans.push_back(2584);
                break;
            case 19:
                ans.push_back(4181);
                break;
            case 20:
                ans.push_back(6765);
                break;
            case 21:
                ans.push_back(10946);
                break;
            case 22:
                ans.push_back(17711);
                break;
            case 23:
                ans.push_back(28657);
                break;
            case 24:
                ans.push_back(46368);
                break;
            case 25:
                ans.push_back(75025);
                break;
            case 26:
                ans.push_back(121393);
                break;
            case 27:
                ans.push_back(196418);
                break;
            case 28:
                ans.push_back(317811);
                break;
            case 29:
                ans.push_back(514229);
                break;
            case 30:
                ans.push_back(832040);
                break;
            case 31:
                ans.push_back(1346269);
                break;
            case 32:
                ans.push_back(2178309);
                break;
            case 33:
                ans.push_back(3524578);
                break;
            case 34:
                ans.push_back(5702887);
                break;
            case 35:
                ans.push_back(9227465);
                break;
            case 36:
                ans.push_back(14930352);
                break;
            case 37:
                ans.push_back(24157817);
                break;
            case 38:
                ans.push_back(39088169);
                break;
            case 39:
                ans.push_back(63245986);
                break;
            case 40:
                ans.push_back(102334155);
                break;
            case 41:
                ans.push_back(165580141);
                break;
            case 42:
                ans.push_back(267914296);
                break;
            case 43:
                ans.push_back(433494437);
                break;
            case 44:
                ans.push_back(701408733);
                break;
            case 45:
                ans.push_back(1134903170);
                break;
            case 46:
                ans.push_back(1836311903);
                break;
            }
        }
        else
            break;
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans.at(i) << endl;
    return 0;
}
