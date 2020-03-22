#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r;
    vector<int>v;
    cin>>n;
    while(n)
    {
       r=n%10;
       n/=10;
       v.push_back(r);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==1&&v[i+1]==4&&v[i+2]==4)
        {
            i=i+2;
            continue;
        }
        else if(v[i]==1&&v[i+1]==4)
        {
            i=i+1;
            continue;
        }
        else if(v[i]==1)
        {
            continue;
        }
        else
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
