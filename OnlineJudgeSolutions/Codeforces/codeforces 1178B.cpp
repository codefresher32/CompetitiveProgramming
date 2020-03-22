#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,o;
    int l;
    ll cnt=0;
    cin>>o;
    char ch='w';
    l=o.size();
    bool f;
    for(int i=0;i<l;i++){
       if(o[i]==o[i+1]&&o[i]=='v'){
            f=1;
            s+=ch;
            cnt++;
       }
       else if(!f){
            s+=o[i];
       }
       else{
            f=0;
       }
    }
    ll ans=0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='w'){
            c++;
        }
        if(s[i]=='o'){
            ans+=(c*(cnt-c));
        }
    }
    cout<<ans<<endl;
    return 0;
}

