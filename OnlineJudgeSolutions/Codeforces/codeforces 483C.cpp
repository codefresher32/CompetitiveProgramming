#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,x;
    cin>>n>>k;
    x=k;
    int cnt=1,tr;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<1<<" ";
            tr=1;
        }
        else if(i%2==0){
            cout<<tr+n<<" ";
            tr+=n;
            n--;
        }
        else{
            cout<<tr-n;
            n--;
            tr-=n;
        }
        if(n==1){
            n=x;
        }
    }
    return 0;
}

