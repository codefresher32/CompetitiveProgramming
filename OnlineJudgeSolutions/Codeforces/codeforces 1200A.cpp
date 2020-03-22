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
    int n;
    string s,ans;
    cin>>n>>s;
    for(int i=0;i<10;i++){
        ans+='0';
    }
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            for(int i=0;i<10;i++){
                if(ans[i]=='0'){
                    ans[i]='1';
                    break;
                }
            }
        }
        else if(s[i]=='R'){
            for(int i=9;i>=0;i--){
                if(ans[i]=='0'){
                    ans[i]='1';
                    break;
                }
            }
        }
        else{
            ans[s[i]-'0']='0';
        }
    }
    cout<<ans<<endl;
    return 0;
}


