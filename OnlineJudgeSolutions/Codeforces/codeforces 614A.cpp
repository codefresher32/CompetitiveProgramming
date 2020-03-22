 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long double l,r,k;
    cin>>l>>r>>k;
    long double mx=1,tr=0;
    bool f=0;
    for(int i=0;i<=64;i++){
        if(mx>=l&&mx<=r){
            f=1;
            cout<<fixed<<setprecision(0)<<mx<<" ";
        }
        if(mx>r){
            break;
        }
        mx*=k;
    }
    if(!f){
        cout<<-1<<endl;
    }
    return 0;
}
