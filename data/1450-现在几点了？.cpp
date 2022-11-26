#include <bits/stdc++.h>
using namespace std;

const string Nums[21] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int p = s.find(':');
        int h = atoi(s.substr(0, p).c_str());
        int m = atoi(s.substr(p + 1).c_str());
        if (m < 45)
        {
            string ans;
            switch (m)
            {
            case 0:
                ans = Nums[h] + " o'clock";
                ans[0] = ans[0] - 32;
                cout << ans << endl;
                break;
            case 15:
                ans = "Quarter past " + Nums[h];
                cout << ans << endl;
                break;
            case 30:
                ans = Nums[h] + " thirty";
                ans[0] = ans[0] - 32;
                cout << ans << endl;
                break;
            case 40:
                ans = Nums[h] + " forty";
                ans[0] = ans[0] - 32;
                cout << ans << endl;
                break;
            default:
                if (m <= 20)
                {
                    ans = Nums[h] + ' ' + Nums[m];
                    ans[0] = ans[0] - 32;
                    cout << ans << endl;
                }
                else
                {
                    ans = Nums[h] + ' ';
                    switch (int(m / 10))
                    {
                    case 2:
                        ans = ans + "twenty-" + Nums[m % 10];
                        ans[0] = ans[0] - 32;
                        cout << ans << endl;
                        break;
                    case 3:
                        ans = ans + "thirty-" + Nums[m % 10];
                        ans[0] = ans[0] - 32;
                        cout << ans << endl;
                        break;
                    case 4:
                        ans = ans + "forty-" + Nums[m % 10];
                        ans[0] = ans[0] - 32;
                        cout << ans << endl;
                        break;
                    default:
                        break;
                    }
                }
                break;
            }
        }
        else
        {
            string ans;
            switch (m)
            {
            case 45:
                ans = "Quarter to " + Nums[h + 1];
                cout << ans << endl;
                break;
            default:
                ans = Nums[60 - m] + " to " + Nums[h + 1];
                ans[0] = ans[0] - 32;
                cout << ans << endl;
                break;
            }
        }
    }
}
