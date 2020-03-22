#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,p=0,ne=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a>0){
            p++;
        }
        if(a<0){
            ne++;
        }
    }
    int x=(n-1)/2+1;

    if(x<=p){
        cout<<1<<endl;
    }
    else if(x<=ne){
        cout<<-1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}

