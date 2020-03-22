#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int>v;
    cin>>n;
    while(n>3)
    {
        v.push_back(2);
        n-=2;
    }
    v.push_back(n);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
