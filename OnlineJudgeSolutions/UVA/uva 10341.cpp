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

int p,q,r,s,t,u;


double f(double x)
{
  return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    while(scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)!=EOF){
        if(f(0)*f(1)>0){
            printf("No solution\n");
        }
        else{
            double lo,hi,mid;
            lo=0,hi=1;
            while(lo+ex<hi){
                mid=(lo+hi)/2;
                if(f(lo)*f(mid)<=0){
                    hi=mid;
                }
                else{
                    lo=mid;
                }
            }
            mid=(lo+hi)/2;
            printf("%0.4f\n",mid);
        }
    }

    return 0;
}



