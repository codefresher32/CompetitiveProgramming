#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s,a,b;
    char pr;
    map<string,int>mp;
    cin>>s;
    pr=s[0];
    int cnt=0,mx=0;
    for(int i=0;i<n;i++){
       if(s[i]==pr){
           cnt++;
           a+=s[i];
       }
       else{
            pr=s[i];
            cnt=0;
            a="";
            a+=s[i];
            cnt++;
       }
       if(cnt==k){
           mp[a]++;
           mx=max(mp[a],mx);
           a="";
           cnt=0;
       }
    }
    cout<<mx<<endl;
    return 0;
}
