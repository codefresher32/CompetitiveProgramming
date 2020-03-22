#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[105][105],b[105][105],n,m,o=0;
    bool f[105][105];
    memset(a,-1,sizeof(a));
    memset(f,true,sizeof(f));
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
            if(b[i][j]==1){
                f[i][j]=false;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[i][j]==0){
                for(int k=0;k<n;k++){
                    a[k][j]=0;
                }
                for(int k=0;k<m;k++){
                    a[i][k]=0;
                }
            }
        }
    }
    int no=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==-1){
                a[i][j]=1;
                for(int k=0;k<n;k++){
                    f[k][j]=true;
                }
                for(int k=0;k<m;k++){
                    f[i][k]=true;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(f[i][j]==false){
                cout<<"NO\n";
                return 0;
            }
        }
    }

    cout<<"YES\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
            cout<<endl;
    }
    return 0;
}
