#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,string>m;
    string s,o,p;
    while(getline(cin,s))
    {
        if(s=="")
            break;
        stringstream sin(s);
        sin>>o>>p;
        m[p]=o;

    }
    while(cin>>s)
    {
        map<string,string>::iterator it;
        it=m.find(s);
        if(it!=m.end())
            cout<<it->second<<endl;
        else
            cout<<"eh\n";
    }
    return 0;
}
