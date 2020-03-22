#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    if(v.size()<=3)
    {
        if(v.size()==3)
        {
            if(2*v[1]==(v[0]+v[2]))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"YES\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
