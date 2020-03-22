#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,m,x,y,ck,cm,c,nn,l;
    while(cin>>n>>k>>m){
        if(n==0&&k==0&&m==0){
            return 0;
        }
        x=1,y=nn=l=n,c=0,ck=0,cm=0;
        bool f[25]={0};
        while(c<n){
           ck=cm=0;
           if(k>nn){
                if(k%nn!=0){
                     nn=k%nn;
                }
           }
           else{
                nn=k;
           }
           for(int i=x;ck<nn;i++){
                i=i>n?1:i;
                if(!f[i]){
                    ck++;
                    x=i;
                }
           }
           nn=l;
           if(m>nn){
                if(m%nn!=0){
                    nn=m%nn;
                }
           }
           else{
                nn=m;
           }
           for(int i=y;cm<nn;i--){
                i=i<1?n:i;
                if(!f[i]){
                    cm++;
                    y=i;
                }
           }
           if(x!=y){
                c+=2;
                printf("%3d%3d",x,y);
                l-=2;
                nn=l;
           }
           else{
                c++;
                printf("%3d",x);
                l--;
                nn=l;
           }
           f[x]=f[y]=1;
           if(c<n){
                printf(",");
           }
           else{
                printf("\n");
           }
        }
    }
    return 0;
}
