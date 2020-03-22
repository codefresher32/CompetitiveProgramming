#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,c,x=1;
    while(cin>>n>>r)
    {
        if(n==0&r==0)
            return 0;
        n-=r;
        c=n/r;
        if(n%r!=0)
            c++;
        if(n<0){
            printf("Case %d: 0\n",x);
            x++;
            continue;
        }
        if(c>26){
            printf("Case %d: impossible\n",x);
            x++;
            continue;
        }
        printf("Case %d: %d\n",x,c);
        x++;
    }
}
