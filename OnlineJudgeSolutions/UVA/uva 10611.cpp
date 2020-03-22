#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,x,y,b;
    int a[50005];
    char s='X';
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>t;
    while(t--)
    {
       cin>>b;
        x=lower_bound(a,a+n,b)-a;
        y=upper_bound(a,a+n,b)-a;
       x--;
       if(x>=0)
        cout<<a[x]<<" ";
       else
        cout<<s<<" ";
       if(y<n)
        cout<<a[y]<<endl;
       else
        cout<<s<<endl;
    }
    return 0;
}
