#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> id;
    vector<double> score;
    for (;;)
    {
        string _id;
        cin >> _id;
        if (_id == "0")
            break;
        double _score;
        cin >> _score;
        id.push_back(_id);
        score.push_back(_score);
    }
    printf("The records are:\n");
    for (int i = 0; i < id.size(); i++)
    {
        printf("%s %.1lf\n", id[i].c_str(), score[i]);
    }
    for (;;)
    {
        string _id;
        cin >> _id;
        if (_id == "0")
            break;
        double _score;
        cin >> _score;
        id.push_back(_id);
        score.push_back(_score);
    }
    for (int i = 0; i < id.size(); i++)
        for (int j = id.size() - 1; j > i; j--)
            if (id[j] < id[j - 1])
            {
                swap(id[j], id[j - 1]);
                swap(score[j], score[j - 1]);
            }
    printf("The records are:\n");
    for (int i = 0; i < id.size(); i++)
    {
        printf("%s %.1lf\n", id[i].c_str(), score[i]);
    }
}
