#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r=0;
    string s;
    cin>>n;
    set<string>ss;
    while(n--)
    {
        s="";
        cin>>s;
        sort(s.begin(),s.end());
        s.erase(unique(s.begin(),s.end()),s.end());
        ss.insert(s);
    }
    cout<<ss.size()<<endl;

    return 0;
}
