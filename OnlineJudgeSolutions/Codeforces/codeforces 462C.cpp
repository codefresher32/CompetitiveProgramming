#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long sum=0,s=0,a;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    s=sum;
    for(int i=0;i<n-1;i++)
    {
        sum+=v[i]+(s-v[i]);
        s-=v[i];
    }
    cout<<sum<<endl;
    return 0;
}
