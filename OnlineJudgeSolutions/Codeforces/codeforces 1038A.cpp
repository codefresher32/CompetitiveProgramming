#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int k[30]={0};
    string s,o;
    cin>>s;
    o=s;
    sort(o.begin(),o.end());
    o.erase(unique(o.begin(),o.end()),o.end());
    if(o.size()<m)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        k[s[i]-'A']++;
    }
    sort(k,k+m);
    cout<<m*k[0]<<endl;
    return 0;
}
