#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int d[105][105];


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,w;
    string s;
    while(scanf("%d",&n)!=EOF){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j){
                    d[i][j]=0;
                }
                else{
                    d[i][j]=1e8;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++){
                cin>>s;
                if(s!="x"){
                    w=stoi(s);
                    d[i][j]=d[j][i]=w;
                }
            }
        }
        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
                }
            }
        }
        int mn=0;
        for(int i=2;i<=n;i++){
            if(d[1][i]<1e8){
                mn=max(mn,d[1][i]);
            }
        }
        printf("%d\n",mn);
    }

    return 0;
}
