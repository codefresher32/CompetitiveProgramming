#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 1000003




int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,a,q;
    long double lo,hi,mid,h,s,x,y;
    scanf("%d",&q);
    while(q--){
        cin>>h>>s;
        //scanf("%lf %lf",&h,&s);
        lo=0.0,hi=sqrt((h*h)/2);
        long double ans=-1,to,area;
        x=(h*h)/4;
        if(x<s||s<1){
            printf("-1\n");
            continue;
        }
        to=1e-12;
        while(lo<=hi){
            mid=(lo+hi)/2;
            x=mid;
            y=sqrt((h*h)-(x*x));
            area=x*y/2;
            if(area>=s){
                hi=mid-to;
            }
            else{
                lo=mid+to;
            }
        }
        long double a,b,c;
        a=lo;
        b=sqrt((h*h)-(lo*lo));
        c=h;
        area=a*b/2;
        if(a>b){
            swap(a,b);
        }
        cout<<fixed<<setprecision(6)<<a<<" "<<b<<" "<<c<<endl;
        //printf("%0.6lf %0.6lf %0.6lf",a,b,c);
        //assert(abs(area-s)<0.01);
    }

    return 0;
}
