#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y,a,b;
    cin>>n>>m;
    char c[120][120];
    int tr=0,cn=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>c[i][j];
            if(c[i][j]=='B'&&tr==0)
            {
                x=i;
                y=j;
                b=j;
                tr=1;
                cn=1;
            }
            else if(c[i][j]=='B'&&tr==1)
            {
                a=i;
                b=j;
            }
            else if(cn==1)
                tr=2;
        }
    }
    int k,l;
    k=(y+b)/2;
    tr=0;
    for(int i=1;i<=n;i++)
    {
        tr=0;
        for(int j=1;j<=m;j++)
        {
           if(c[i][j]=='B'&&tr==0)
            {
                y=i;
                tr=1;
            }
        }
    }
    l=(x+y)/2;
    cout<<l<<" "<<k<<endl;
    return 0;
}

