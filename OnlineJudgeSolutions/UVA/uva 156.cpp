#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define pi pair<string,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main()
{
    string s,o,p;
    set<string>st;
    map<string,bool>mp;
    map<string,string>pm;
    //getchar();
    while(getline(cin,s)){
        if(s=="#") break;
        stringstream ssin(s);
        while(ssin>>o){
            p=o;
            transform(p.begin(),p.end(),p.begin(),::tolower);
            sort(p.begin(),p.end());
            if(mp[p]){
                auto it=st.find(pm[p]);
                if(it!=st.end()) st.erase(it);
            }
            else{
                mp[p]=1;
                st.insert(o);
                pm[p]=o;
            }
        }
    }
    for(auto x:st){
        cout<<x<<"\n";
    }
    return 0;
}



