#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,k,a[20],cnt,day,x;
    cin>>t;
    while(t--){
       cnt=0;
       cin>>k;
       for(int i=1;i<=7;i++){
            cin>>a[i];
            cnt+=a[i];
            a[i+7]=a[i];
       }
       ll mn=INT_MAX;
        for(int i=1;i<=7;i++){
            if(a[i]){
               day=(k/cnt);
               if(k%cnt==0){
                    day--;
               }
               x=day*cnt;
               day*=7;
               for(int j=i;j<=i+7;j++){
                   x+=a[j];
                   day++;
                   if(x==k){
                        break;
                   }
               }
               mn=min(day,mn);
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}

