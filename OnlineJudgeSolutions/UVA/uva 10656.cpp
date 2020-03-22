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
    int n,m,a;
    while(scanf("%d",&n)!=EOF){
       if(!n){
            break;
       }
       vector<int>vc;
       for(int i=1;i<=n;i++){
            scanf("%d",&a);
            if(a>0){
                vc.pb(a);
            }
       }
       if(!vc.size()){
            printf("0");
       }
       for(int i=0;i<vc.size();i++){
            printf("%d",vc[i]);
            if(i+1<vc.size()){
                printf(" ");
            }
       }
       printf("\n");
    }
    return 0;
}



