#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int ar[3][1005];



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,s;
    cin>>n>>s;
    for(int i=1;i<=2;i++){
        for(int j=1;j<=n;j++){
            cin>>ar[i][j];
        }
    }
    if(!ar[1][1]){
        cout<<"NO\n";
    }
    else if(ar[1][s]){
        cout<<"YES\n";
    }
    else if(ar[2][s]){
        bool f=0;
        for(int i=s;i<=n;i++){
            if(ar[1][i]==1&&ar[2][i]==1){
                f=1;
            }
        }
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}



