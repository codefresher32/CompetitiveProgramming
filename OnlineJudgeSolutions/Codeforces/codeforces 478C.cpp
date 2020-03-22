#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long r[3],t;
    for(int i=0;i<3;i++)
        cin>>r[i];
    sort(r,r+3);
    if(r[0]==r[1]&&r[0]==0)
        t=0;
    else if(r[2]>=2*(r[0]+r[1]))
        t=r[0]+r[1];
    else
        t=(r[0]+r[1]+r[2])/3;
    cout<<t<<endl;
    return 0;
}
