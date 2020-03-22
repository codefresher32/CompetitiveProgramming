#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int>v,a;
    for(int i=0;i<n;i++)
    {
       cin>>x;
       v.push_back(x);
    }
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>=v[i+1])
            a.push_back(v[i]);
    }
    a.push_back(v[n-1]);
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    return 0;
}
