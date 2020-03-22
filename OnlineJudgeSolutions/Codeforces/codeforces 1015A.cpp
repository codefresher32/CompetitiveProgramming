#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y;
    int a[105]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
       cin>>x>>y;
       for(int j=x;j<=y;j++)
            a[j]=1;
    }
    vector<int>v;
    for(int i=1;i<=m;i++)
        {
            if(a[i]==0)
                v.push_back(i);
        }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
