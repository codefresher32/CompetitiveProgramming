#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pi pair<char,int>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define mod 100000007

ll ans;
int ar[200005],temp[200005];

void Merge(int s,int mid,int e)
{
    for(int i=s,j=mid+1,k=s;k<=e;k++){
        if(i>mid) temp[k]=ar[j++];
        else if(j>e) temp[k]=ar[i++];
        else if(ar[i]>ar[j]) ans+=mid-i+1,temp[k]=ar[j++];
        else temp[k]=ar[i++];
    }
    for(int i=s;i<=e;i++) ar[i]=temp[i];
    return ;
}

void merge_sort(int s,int e)
{
    if(s==e) return ;
    int mid=(s+e)/2;
    merge_sort(s,mid);
    merge_sort(mid+1,e);
    Merge(s,mid,e);
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,q,n,l,r,p;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&ar[i]);
        }
        ans=0;
        merge_sort(1,n);
        printf("%lld\n",ans);
    }
    return 0;
}


