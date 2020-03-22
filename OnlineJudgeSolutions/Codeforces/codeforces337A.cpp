#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    vector<int>v;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    int mn=INT_MAX;
    for(int i=0,j=i+n-1;i<=m-n,j<m;i++,j++)
    {
            if(v[j]-v[i]<mn)
                mn=v[j]-v[i];
    }
    cout<<mn<<endl;
    return 0;
}
