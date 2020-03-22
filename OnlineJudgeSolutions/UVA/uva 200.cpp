#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,ans;
    vector<string>v;
    map<char,int>mp;
    x:while(cin>>s){
        if(s[0]=='#'){
            ans="";
            for(int i=0;i<21;i++){
                for(int j=0;j<v.size()&&i<v[j].size();j++){
                    if(!mp[v[j][i]]){
                        ans+=v[j][i];
                        mp[v[j][i]]++;
                    }
                }
            }
            cout<<ans<<endl;
            mp.clear();
            v.clear();
            goto x;
        }
        v.pb(s);
    }

    return 0;
}

