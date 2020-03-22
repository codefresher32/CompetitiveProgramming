#include<bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003
#define ex 1e-7



int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    ll a[7],sum,x,f;
    while(true){
        sum=0;
        for(ll i=1;i<=6;i++){
           scanf("%lld",&a[i]);
           sum+=a[i];
        }
        if(!sum) break;
        sum=a[6];
        sum+=a[5],a[1]-=(a[5]*11);
        sum+=a[4],a[2]-=(a[4]*5);
        x=a[3]/4;
        sum+=x,f=a[3]%4;
        if(f==1){
            sum++;
            a[2]-=5,a[1]-=7;
        }
        else if(f==2){
            sum++;
            a[2]-=3,a[1]-=6;
        }
        else if(f==3){
            sum++;
            a[2]--,a[1]-=5;
        }
        if(a[2]>0){
            x=a[2]/9;
            sum+=x,a[2]-=(9*x);
            if(a[2]){
                sum++;
                a[1]-=(36-a[2]*4);
                a[2]=0;
            }
        }
        if(a[2]<0){
            a[1]+=(a[2]*4);
        }
        if(a[1]>0){
            sum+=(a[1]-1)/36+1;
        }
        printf("%lld\n",sum);
    }

    return 0;
}

