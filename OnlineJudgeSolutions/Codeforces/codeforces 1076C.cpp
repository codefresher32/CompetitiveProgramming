#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    double a,b,mid,lo,hi,n,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        lo=0.0,hi=n;
        bool f=0;
        for(int i=1;i<=200;i++){
            mid=(lo+hi)/2.0;
            a=mid;
            b=n-mid;
            if(fabs(a*b-n)<1e-6){
                f=1;
                cout<<"Y ";
                cout<<fixed<<setprecision(15)<<max(a,b)<<" "<<min(a,b)<<endl;
                break;
            }
            else if(a*b>n){
                lo=mid;
            }
            else{
                hi=mid;
            }
        }
        if(!f){
            cout<<"N\n";
        }
    }
    return 0;
}
