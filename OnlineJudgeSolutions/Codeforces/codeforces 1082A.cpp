#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,x,y,d,ds,ans,d1,d2,d3,d4,a,b;
        cin>>n>>x>>y>>d;
        ds= abs(x-y);
        if(ds%d==0){
            cout<<ds/d<<endl;
        }
        else{
            d1=x-1;
            d2=y-1;

            d3=n-x;
            d4=n-y;
            if(d2%d!=0&&d4%d!=0){
                cout<<-1<<endl;
            }
            else{
               a=d2/d;
               a+=d1/d;
               if(d1%d!=0){
                    a++;
               }
               b=d4/d;
               b+=d3/d;
               if(d3%d!=0){
                    b++;
               }
               if(d2%d==0&&d4%d!=0){
                    cout<<a<<endl;
               }
               else if(d2%d!=0&&d4%d==0){
                    cout<<b<<endl;
               }
               else{
                    cout<<min(a,b)<<endl;
               }
            }
        }
    }
    return 0;
}

