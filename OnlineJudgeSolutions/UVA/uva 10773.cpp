#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x=1;
    float d,u,v,t1,t2;
    cin>>t;
    while(t--)
    {
        cin>>d>>v>>u;
        if(u==0||v==0||v>=u)
        {
            printf("Case %d: can't determine\n",x);
            x++;
            continue;
        }
        t1=d/u;
        t2=d/sqrt((u*u)-(v*v));
        printf("Case %d: %0.3f\n",x,t2-t1);
        x++;
    }
    return 0;
}
