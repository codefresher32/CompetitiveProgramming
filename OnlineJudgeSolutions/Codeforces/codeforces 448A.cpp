#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[3],b[3],s1=0,s2=0,x,y;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
        s1+=a[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
        s2+=b[i];
    }
    cin>>n;
    x=s1/5;
    if(s1%5!=0)
        x++;
    y=s2/10;
    if(s2%10!=0)
        y++;
    if(n>=(x+y))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}

