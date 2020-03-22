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
        if(a%2==0)
            a--;
        v.push_back(a);
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
