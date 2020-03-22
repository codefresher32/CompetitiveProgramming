#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int>arr;
int main()
{
    int a,b,x,n;
    vector<int>v;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr[a]++;
        v.push_back(a);
    }
    long long c=0;
    for(int i=0;i<n;i++)
    {
        c+=arr[v[i]^x];
        if(x==0)
            c--;
    }
    cout<<c/2<<endl;
    return 0;
}
