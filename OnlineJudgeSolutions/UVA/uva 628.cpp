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

int c,l;
vector<string>vs;
vector<int>po;


void subset(string o,int l)
{
    if(c<1||l<0){
        return ;
    }
    if(c>0){
        for(int j=0;j<=9;j++){
            for(string s:vs){
                for(int k=0;k<o.size();k++){
                    if(k==l){
                        o[k]='0'+j;
                    }
                    if(o[k]=='#'){
                        cout<<s;
                    }
                    else{
                        cout<<o[k];
                    }
                }
                cout<<endl;
            }
        }
        c--;
        return ;
    }
    for(int i=1;i<po.size();i++){
        subset(o,po[i]);
    }
}



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m;
    string s;
    while(scanf("%d",&n)!=EOF){
        for(int i=1;i<=n;i++){
            cin>>s;
            vs.pb(s);
        }
        scanf("%d",&m);
        printf("--\n");
        for(int i=1;i<=m;i++){
            cin>>s;
            c=0;
            po.pb(-1);
            for(int j=0;j<s.size();j++){
                if(s[j]=='0'){
                    c++;
                    po.pb(j);
                }
            }
            reverse(po.begin(),po.end());
            subset(s,po[0]);
            po.clear();
        }
        vs.clear();
    }
    return 0;
}


