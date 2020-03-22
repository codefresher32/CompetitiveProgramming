#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    map<string,int>m;
    map<string,int>::iterator it;
    string s,o;
    getchar();
    while(t--)
    {
        getline(cin,s);
        stringstream sin(s);
        sin>>o;
        m[o]++;
    }
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
