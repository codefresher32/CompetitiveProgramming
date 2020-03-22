#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,s,a,p=0;
    int mb[10005]={0},ms[10005]={0};
    while(cin>>b>>s)
    {
        if(b==0&&s==0)
            return 0;
        for(int i=0;i<b;i++)
            cin>>mb[i];
        for(int i=0;i<s;i++)
            cin>>ms[i];
        sort(mb,mb+b);
        if(b-s>0)
            printf("Case %d: %d %d\n",++p,b-s,mb[0]);
        else
            printf("Case %d: 0\n",++p);
    }
}
