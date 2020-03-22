#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,r,a;
    int m[105],e[105];
    while(cin>>n>>d>>r)
    {
        if(n==0&&d==0&&r==0)
            return 0;
        for(int i=0;i<n;i++)
            cin>>m[i];
        for(int i=0;i<n;i++)
            cin>>e[i];
        sort(m,m+n);
        sort(e,e+n,greater<int>());
        long long s=0,x=0;
        for(int i=0;i<n;i++)
        {
            s=m[i]+e[i];
            if(s>d)
                x+=s-d;
            s=0;
        }
        cout<<x*r<<endl;
    }
}
