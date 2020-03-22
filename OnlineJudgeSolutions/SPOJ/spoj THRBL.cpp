#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<char,char>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int lg[100005],ar[100005];
int st[100005][32];


void Sparse_Table(int n)
{
    int k;
    lg[1]=0;
    for(int i=2;i<=n;i++){
        lg[i]=lg[i/2]+1;
    }
    for(int i=0;i<n;i++){
        st[i][0]=ar[i];
    }
    k=lg[n];
    for(int j=1;j<=k;j++){
        for(int i=0;i+(1<<(j-1))<=n;i++){
            st[i][j]=max(st[i][j-1],st[i+(1<<(j-1))][j-1]);
        }
    }
    return ;
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n,q,l,r,x,y,o,p;
    scanf("%d %d",&n,&q);
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    Sparse_Table(n);
    int c=0;
    while(q--){
        scanf("%d %d",&l,&r);
        l--,r-=2;
        x=lg[r-l+1];
        y=max(st[l][x],st[r-(1<<x)+1][x]);
        if(ar[l]>=y){
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}

