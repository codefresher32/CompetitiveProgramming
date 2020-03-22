#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,o;
    s+='1';
    o+="1";
    for(int i=2;s.size()<=2147483647;i++)
    {
        o+=to_string(i);
        s+=o;
    }
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<s[n-1]<<endl;
    }
    return 0;
}
