 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int b,k,a,cnt=0;
    cin>>b>>k;
    for(int i=1;i<=k;i++){
        cin>>a;
        if(a&1&&b&1){
            cnt++;
        }
    }
    if(a&1&&b%2==0){
       cout<<"odd\n";
    }
    else if(cnt&1){
        cout<<"odd\n";
    }
    else{
        cout<<"even\n";
    }
    return 0;
}


