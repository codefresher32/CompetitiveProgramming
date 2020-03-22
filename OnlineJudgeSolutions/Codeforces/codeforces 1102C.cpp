#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y,a[105],cx=0,cy=0;
    cin>>n>>x>>y;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(x>y){
        cout<<n<<endl;
    }
    else{
        sort(a+1,a+1+n);
        for(int i=1;i<=n;i+=2){
            if(a[i]<=x){
                cy++;
            }
        }
        cout<<cy<<endl;
    }
    return 0;
}
