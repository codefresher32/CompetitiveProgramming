#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y,d;
    cin>>n>>m;
    vector<pair<int,int>>v;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    string s;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(c%2==0)
            s+='0';
        else if(c&1)
            s+='1';
        c++;
    }
    cout<<s<<endl;
    return 0;
}
