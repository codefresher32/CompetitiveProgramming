#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,r;
    vector<int>v;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        r=min(r,9-r);
        v.push_back(r);
        n/=10;
    }
    reverse(v.begin(),v.end());
    if(v[0]==0)
        v[0]=9;
    for(int i=0;i<v.size();i++)
        cout<<v[i];
    cout<<endl;
    return 0;
}
