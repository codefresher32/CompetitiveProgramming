#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    double a,b,n,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        if(n*n<4.0*n){
           cout<<"N\n";
           continue;
        }
        x=sqrt(n*n-4.0*n);
        b=(n-x)*0.5;
        a=(n+x)*0.5;
        cout<<"Y ";
        cout<<fixed<<setprecision(15)<<a<<" "<<b<<endl;
    }
    return 0;
}

