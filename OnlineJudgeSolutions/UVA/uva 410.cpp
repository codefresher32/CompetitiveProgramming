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
    int s,n,id=0,a[50]={0};
    double sum,im;
    while(scanf("%d %d",&s,&n)!=EOF){
        sum=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        sum=(double)sum/s;
        sort(a+1,a+1+n,greater<int>());
        printf("Set #%d\n",++id);
        int i=1,t=0,x;
        im=0;
        while(s){
            printf(" %d:",t++);
            x=i+2*s-1;
            if(x<=n){
                printf(" %d %d\n",a[i],a[x]);
                im+=abs(sum-(a[i]+a[x]));
            }
            else if(i<=n){
                printf(" %d\n",a[i]);
                im+=abs(sum-a[i]);
            }
            else{
                printf("\n");
                im+=sum;
            }
            i++,s--;
        }
        printf("IMBALANCE = %0.5f\n",im);
        printf("\n");
    }
    return 0;
}


