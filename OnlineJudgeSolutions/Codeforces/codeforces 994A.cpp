#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,x[11],y[11];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<m;i++)
        cin>>y[i];
    int t=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(x[i]==y[j]){
                t=1;
                cout<<x[i]<<" ";
            }
        }
    }
    if(!t)
        cout<<" ";
    return 0;
}
