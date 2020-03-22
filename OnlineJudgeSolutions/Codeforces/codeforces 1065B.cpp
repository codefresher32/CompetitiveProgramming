#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,mn,mx;
    cin>>n>>m;
    if(m==0){
        cout<<n<<" "<<n<<endl;
        return 0;
    }
    mn=n-2*m;
    if(mn<0){
        mn=0;
    }
    ll b=1,j;
    while(1){
       j=b*(b-1)/2;
       if(j>=m){
         break;
       }
        b++;
    }
    //cout<<b<<endl;
    mx=n-b;
    cout<<mn<<" "<<mx<<endl;
    return 0;
}


