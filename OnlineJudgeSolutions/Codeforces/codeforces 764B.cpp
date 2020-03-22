#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0,j=n-1;i<=j;i+=2,j-=2)
        swap(v[i],v[j]);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
