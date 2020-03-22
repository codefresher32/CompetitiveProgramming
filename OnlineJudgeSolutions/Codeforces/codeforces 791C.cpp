#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string G="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string g="abcdefghijklmnopqrstuvwxyz";

string getname(string s)
{
    string s1;
    if(s[0]!='Z'){
        for(int i=0;i<25;i++){
            if(G[i]==s[0]){
               s1+=G[i+1];
               break;
            }
        }
        s1+=s[1];
        return s1;
    }
    else{
        s1+=s[0];
        for(int i=0;i<25;i++){
            if(g[i]==s[1]){
               s1+=g[i+1];
               break;
            }
        }
        return s1;
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,m;
    string s1,s2,x="Aa";
    vector<string>v,ans;
    cin>>n>>k;
    m=n-k+1;
    for(int i=1;i<=n-m;i++){
        if(i!=1){
            x=getname(x);
        }
        ans.push_back(x);
    }
    int l;
    for(int i=1;i<=m;i++){
        cin>>s1;
        if(s1=="NO"){
            l=ans.size();
            l=l-(n-m);
            s2=ans[l];
        }
        else{
            x=getname(x);
            s2=x;
        }
        ans.push_back(s2);
    }
    for(string xx:ans){
        cout<<xx<<" ";
    }
    cout<<endl;
    return 0;
}

