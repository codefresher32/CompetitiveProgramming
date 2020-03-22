#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[200000],dp[200000],dir[200000],t[200000];

int main()
{
    int pos,l=0,end;
    for(int i=0;;i++){
        if(scanf("%d",&a[i])==EOF){
            break;
        }
        pos=lower_bound(dp,dp+l,a[i])-dp;
        dp[pos]=a[i];
        t[pos]=i;
        if(pos>0){
            dir[i]=t[pos-1];
        }
        else{
            dir[i]=-1;
        }
        if(pos==l){
            l++;
            end=i;
        }
    }
    printf("%d\n-\n",l);
    vector<int>v;
    while(end!=-1){
       v.push_back(a[end]);
       end=dir[end];
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<endl;
    }
    return 0;
}
