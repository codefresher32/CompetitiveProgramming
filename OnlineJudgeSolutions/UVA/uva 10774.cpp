#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c,x,n,p,i=0;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        while(true)
        {
            x=log2(n)/log2(2);
            p=n;
            n=2*(n-pow(2,x))+1;
            if(p==n)
                break;
            c++;
        }
        printf("Case %d: %d %d\n",++i,c,n);
    }
    return 0;
}
