#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5],b[5];

    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]){
    int t=1;
    for(int i=0;i<5;i++)
    {
        cin>>b[i];
        if(a[i]==b[i])
        {
            t=0;
        }
    }
    if(!t)
        cout<<"N\n";
    else
        cout<<"Y\n";
    }
}
