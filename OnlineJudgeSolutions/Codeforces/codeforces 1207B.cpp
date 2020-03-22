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

bool vis[55][55];

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a[55][55]={{0}},b[50][50]={{0}};
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    set<pii>vc;
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]==1&&a[i][j+1]==1&&a[i+1][j]==1&&a[i+1][j+1]==1){
                vc.insert({i,j});
                b[i][j]=b[i][j+1]=b[i+1][j]=b[i+1][j+1]=1;
            }
        }

    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]!=b[i][j]){
                cout<<"-1\n";
                return 0;
            }
        }
    }
    cout<<vc.size()<<endl;
    for(pii tp:vc){
        cout<<tp.F<<" "<<tp.S<<endl;
    }
    return 0;
}


/*
5 5
1 1 0 1 1
1 1 1 1 1
0 1 1 1 0
1 1 1 1 0
1 1 0 0 0
*/

