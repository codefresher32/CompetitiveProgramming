#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,x;
    vector<int>v;
    cin>>n;
    a=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    for(int i=1;i<=a;i++)
    {
        if(i&1)
            v.erase(v.begin());
        else
            v.pop_back();
    }
    cout<<v.front()<<endl;
    return 0;
}
