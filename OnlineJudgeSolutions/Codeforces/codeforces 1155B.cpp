#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

bool vis[100005];



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    string s;
    cin>>n>>s;
    m=n;
    for(int i=0,j=0,k=1;n>11;k++){
        if(k&1){
            while(s[i]=='8'&&i<m){
                i++;
            }
            if(i<=m&&!vis[i]){
                vis[i]=1;
                //cout<<"i: "<<i+1<<endl;
                i++;
            }
        }
        else{
            while(s[j]!='8'&&j<m){
                j++;
            }
            if(j<=m&&!vis[j]){
                vis[j]=1;
                //cout<<"j: "<<j+1<<endl;
                j++;
            }
        }
        n--;
    }
    for(int i=0;i<m;i++){
        if(!vis[i]){
            (s[i]=='8')?printf("YES\n"):printf("NO\n");
            return 0;
        }
    }
    return 0;
}
