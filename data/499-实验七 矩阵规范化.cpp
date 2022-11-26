#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    // double **matrix = new double *[x];
    // for (int i = 0; i < y; i++)
    //     matrix[i] = new double;
    double matrix[x][y];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < x; j++)
            cin >> matrix[i][j];
    for (int i = 0; i < x; i++)
    {
        double _max = 0;
        for (int j = 0; j < x; j++)
            _max = max(_max, matrix[i][j]);
        for (int j = 0; j < x; j++)
            matrix[i][j] /= _max;
    }
    for (int i = 0; i < x; i++)
    {
        printf("%.2lf", matrix[i][0]);
        for (int j = 1; j < x; j++)
            printf(" %.2lf", matrix[i][j]);
        cout << endl;
    }
    return 0;
}
