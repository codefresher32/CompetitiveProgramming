#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<char,int>ma,mb;
    string s;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        if(ma[s[0]]<=mb[s[0]]){
            ma[s[0]]++;
        }
        else{
            mb[s[0]]++;
        }
    }
    int ans=0,x,y;
    for(auto it:ma){
        if(it.S>0){
           x=it.S*(it.S-1);
            x/=2;
            ans+=x;
        }

    }
    for(auto it:mb){
        if(it.S>0){
           x=it.S*(it.S-1);
            x/=2;
            ans+=x;
        }
    }
    cout<<ans<<endl;
    return 0;
}

