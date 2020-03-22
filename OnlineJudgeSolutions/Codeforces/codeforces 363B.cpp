#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a[150005]={0},x;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[i]=a[i-1]+x;
    }
    int j=1,b;
    vector<pair<int,int>>p;
    for(int i=k;i<=n;i++)
    {
        b=a[i]-a[i-k];
        p.push_back(make_pair(b,j));
        j++;
    }
    sort(p.begin(),p.end());
    cout<<p[0].second<<endl;
    return 0;
}
