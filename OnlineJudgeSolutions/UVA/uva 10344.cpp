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

int a[6],b[6],cnt;
bool f,vis[6];

void subset2(int s,int id)
{
    if(s==23&&id==6){
        f=1;
        return ;
    }
    if(id>=6){
        return ;
    }
    subset2(s+b[id],id+1);
    subset2(s-b[id],id+1);
    subset2(s*b[id],id+1);
}

void subset1(int pos)
{
    if(pos==6){
        subset2(b[1],2);
        return ;
    }
    for(int i=1;i<=5;i++){
        if(!vis[i]){
            vis[i]=1;
            b[pos]=a[i];
            subset1(pos+1);
            vis[i]=0;
        }
    }
}


int main ()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int sum;
    while(true){
        sum=0;
        for(int i=1;i<=5;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if(!sum){
            return 0;
        }
        subset1(1);
        if(f){
            printf("Possible\n");
        }
        else{
            printf("Impossible\n");
        }
        f=0;
        memset(vis,0,sizeof(vis));
    }

    return 0;
}



