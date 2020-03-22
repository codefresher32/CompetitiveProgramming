#include<bits/stdc++.h>
using namespace std;


int main()
{
    int y[100005]={0},v[100005]={0};
    int n,x,a;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(y[v[i]]==1)
        {
            cout<<0<<endl;
            return 0;
        }
        y[v[i]]=1;
    }
    //sort(v+1,v+1+n);
    int c=-1;
        for(int i=1;i<=n;i++)
        {
            a=x&v[i];
            if(y[a]==1&&a!=v[i])
            {
                cout<<1<<endl;
                return 0;
            }
            if(y[a]==2)
                c=2;
            if(y[a]==0)
                y[a]=2;
        }
    cout<<c<<endl;
    return 0;
}

