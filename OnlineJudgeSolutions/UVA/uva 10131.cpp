#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

struct ele
{
    int w,s,id;
}a[1005];

bool f(ele A,ele B)
{
    if(A.s==B.s){
        return A.w<B.w;
    }
    return A.s>B.s;
}

int main()
{
    int x,y,n=1;
    int dp[1005]={0},dir[1005]={0};
   while(cin>>x>>y){
        a[n].w=x;
        a[n].s=y;
        a[n].id=n;
        dir[n]=n;
        n++;
   }
   n--;
   sort(a+1,a+1+n,f);
   dp[1]=1;
   for(int i=2;i<=n;i++){
      dp[i]=1;
      for(int j=1;j<i;j++){
            if(a[j].w<a[i].w&&dp[j]+1>=dp[i]&&a[j].s>a[i].s){
                dp[i]=dp[j]+1;
                dir[i]=j;
            }
      }
   }

   int mx=distance(dp,max_element(dp,dp+n+1));
   vector<int>v;
   cout<<dp[mx]<<endl;
   while(mx!=dir[mx]){
        v.push_back(a[mx].id);
        mx=dir[mx];
   }
   v.push_back(a[mx].id);
   for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<endl;
   }
    return 0;
}
