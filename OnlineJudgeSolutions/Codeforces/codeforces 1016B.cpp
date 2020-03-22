#include<bits/stdc++.h>
using namespace std;

int a[1005][1005],b[1005][1005];

int main()
{
    int n,m,q;
    string s1,s2;
    cin>>n>>m>>q;
    cin>>s1>>s2;
    int k,l,i,j;
    for(i=0;i<n-m+1;i++)
    {
        k=1;
        l=0;
        for(j=i;j<i+m;j++)
        {
            if(s1[j]!=s2[l])
            {
                k=0;
                break;
            }
            l++;
        }
        if(k)
            a[i+1][j]=1;
    }
    int c;
    for(i=0;i<n-m+1;i++)
    {
       c=0;
       for(j=i+m;j<=n;j++)
       {
           if(a[j-m+1][j])
            c++;
        b[i+1][j]=c;
       }

    }
    int x,y;
    while(q--)
    {
       cin>>x>>y;
       cout<<b[x][y]<<endl;
    }
    return 0;
}
