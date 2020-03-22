#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,l,cnt=0;
    string s,o,p,ans;
    cin>>s;
    l=s.size();
    for(int i=0;i<l;i++){
        if(s[i]=='a'){
            cnt++;
        }
    }
    n=l-cnt;
    m=l-n/2;
    if(n&1){
        printf(":(\n");
    }
    else{
       for(int i=0;i<l;i++){
            if(i<m){
                if(s[i]!='a'){
                    o+=s[i];
                }
                ans+=s[i];
            }
            else{
                p+=s[i];
            }
       }
       if(o==p){
            cout<<ans<<endl;
       }
       else{
            printf(":(\n");
       }
    }
    return 0;
}
