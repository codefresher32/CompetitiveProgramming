 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll aa[100]={0};

#define pii pair<int,int>

void ck(ll a)
{
    ll n=a,l=0;
    ll x,y;
    while(n){
        l++;
        n/=2;
    }
    n=a;
    x=aa[l]-1;
    if(x!=a){
        cout<<x<<endl;
    }
    else{
        if(n%2==0){
           y=2;
        }
        else{
            y=1;
            for(ll i=3;i*i<=a;i+=2){
                if(n%i==0){
                    y=max(y,max(i,n/i));
                    while(n%i==0){
                        n/=i;
                    }
                }
            }
        }
        cout<<y<<endl;
    }
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll q,a,b,x,y;
    aa[0]=1;
    for(int i=1;i<=28;i++){
       aa[i]=2ll*aa[i-1];
    }
//    for(int i=0;i<=28;i++){
//        cout<<aa[i]<<" ";
//    }
    vector<int>v;
    cin>>q;
    while(q--){
       cin>>a;
        ck(a);
    }
    return 0;
}



