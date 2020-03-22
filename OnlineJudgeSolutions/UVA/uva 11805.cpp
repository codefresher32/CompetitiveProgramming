#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,p,x=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>p;
        p=(p+k)%n;
        if(p==0)
            p=n;
        printf("Case %d: %d\n",x,p);
        x++;
    }
    return 0;

}
