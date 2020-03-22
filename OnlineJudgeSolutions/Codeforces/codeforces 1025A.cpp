#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k,l;
    string s,o;
    cin>>n;
    cin>>s;
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    if(n!=1&&s.size()==n)
        cout<<"No\n";
    else
        cout<<"Yes\n";
    return 0;
}
