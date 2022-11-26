#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    char **s1 = new char *[n], **s2 = new char *[n];
    for (int i = 0; i < n; i++)
    {
        s1[i] = new char[1000];
        s2[i] = new char[1000];
        scanf("\n%[^\n]", s1[i]);
        scanf("\n%[^\n]", s2[i]);
        for (int j = 0; j < 1000; j++)
        {
            if (s1[i][j] == '\0')
            {
                for (int k = j; k < 1000; k++)
                {
                    if (s2[i][k - j] != '\0')
                        s1[i][k] = s2[i][k - j];
                    else
                        break;
                }
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("The new string is: %s\n", s1[i]);
    }
    return 0;
}
