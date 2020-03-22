#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,x;
    vector<int>v;
    cin>>n;
    x=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    if(n==1)
    {
        cout<<v[0]<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    cout<<v[x/2]<<endl;
    return 0;
}
