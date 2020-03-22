#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k,sum=0,x;
    cin>>n>>m>>k;
    while(k--){
        x=(2*n)+(2*m)-4;
        if(x>=0){
            sum+=x;
        }
        n-=4;
        m-=4;
    }
    cout<<sum<<endl;
    return 0;
}
