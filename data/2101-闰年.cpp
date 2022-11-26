#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;
    if ((y%4)==0){
        if ((y%100)==0 & (y%400)!=0) {cout<<"no\n";return 0;}
        cout<<"yes\n";
        return 0;
    }
    cout<<"no\n";
    return 0;
}
