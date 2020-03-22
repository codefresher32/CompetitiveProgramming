#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define pii pair<int,int>



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[100005]={0};
    cin>>n;
    int mx=0,mn=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    int j=1;
    for(int i=1,j=1;i<=n;i++){
        if(a[i]==mx){
            mn=max(mn,i-j+1);
        }
        else{
            j=i;
        }
    }
    cout<<mn<<endl;
    return 0;
}


