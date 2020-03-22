#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


double d[105][105];



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,n,u,v,id=0,a1[105],a2[105];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d %d",&a1[i],&a2[i]);
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                d[i][j]=INT_MAX;
            }
        }
        double xx;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                xx=sqrt((double)(a1[i]-a1[j])*(a1[i]-a1[j])+(a2[i]-a2[j])*(a2[i]-a2[j]));
                if(xx<=10){
                    d[i][j]=d[j][i]=xx;
                }
            }
        }
        double mx=-1;
        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                //printf("%0.4f ",d[i][j]);
                mx=max(mx,d[i][j]);
            }
            //puts("");
        }
        printf("Case #%d:\n",++id);
        if(mx==-1||mx==INT_MAX){
            printf("Send Kurdy\n");
        }
        else{
            printf("%0.4f\n",mx);
        }
        printf("\n");

    }

    return 0;
}


