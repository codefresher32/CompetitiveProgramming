#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,x,y,w,p=0;
   cin>>t;
   while(t--){
        cin>>n>>w;
        int mx=INT_MIN,my=INT_MIN,cnt=1;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            mx=max(mx,x);
            my=max(my,y);
        }
        cnt+=min(mx,my)-w;
        printf("Case %d: %d\n",++p,cnt);
   }
   return 0;
}
