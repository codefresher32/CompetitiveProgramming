#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    map<string,int>mp;
    map<string,int>::iterator it;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        it=mp.find(s);
        if(it==mp.end()){
            cout<<"OK\n";
            mp[s]++;
        }
        else
        {
            cout<<it->first<<it->second<<endl;
            mp[s]++;
        }
    }
    return 0;
}
