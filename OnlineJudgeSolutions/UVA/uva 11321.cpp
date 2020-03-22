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

struct node
{
    int d;
    int md;
}arr[10005];

bool even(int x)
{
   if(x<0) x*=-1;
   if(x%2==0) return true;
   return false;
}

bool odd(int x)
{
    if(x<0) x*=-1;
   if(x%2==0) return false;
   return true;
}

bool com(node A,node B)
{
    if(A.md==B.md){
        if(odd(A.d)&&even(B.d)) return true;
        else if(odd(A.d)&&odd(B.d)&&A.d>B.d) return true;
        else if(even(A.d)&&even(B.d)&&A.d<B.d) return true;
    }
    return A.md<B.md;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,m,a;
    while(scanf("%d %d",&n,&m)){
        if(!(n+m)){
            printf("0 0\n");
            return 0;
        }
        printf("%d %d\n",n,m);
        for(int i=1;i<=n;i++){
            scanf("%d",&a);
            arr[i].d=a,arr[i].md=a%m;
        }
        sort(arr+1,arr+1+n,com);
        for(int i=1;i<=n;i++){
            printf("%d\n",arr[i].d);
        }
    }
    return 0;
}


