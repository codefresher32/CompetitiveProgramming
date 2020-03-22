#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int mn,ans=0,mx=0,ar[10]={0},br[10]={0};
    mn=min(a/3,min(b/2,c/2));
    ans+=(mn*7);
    a-=mn*3,b-=mn*2,c-=mn*2;
    ar[2]=ar[3]=ar[6]=a;
    ar[1]=ar[4]=b;
    ar[5]=ar[7]=c;
    for(int i=1;i<=7;i++){
        mn=0;
        for(int j=1;j<=7;j++){
            br[j]=ar[j];
        }
        for(int j=i;br[j];){
            mn++;
            if(j==2||j==3||j==6){
                br[2]--,br[3]--,br[6]--;
            }
            if(j==1||j==4){
                br[1]--,br[4]--;
            }
            if(j==5||j==7){
                br[5]--,br[7]--;
            }
            j++;
            j=j>7?1:j;
        }
        mx=max(mx,mn);
    }
    cout<<ans+mx<<endl;
    return 0;
}

