#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    getchar();
    char ch[20];gets(ch);
    while(t--){
        int n=1;
        vector<int>a;
        int dp[100000]={0},dir[100000]={0};
        while(gets(ch)&&strlen(ch)){
           a.push_back(atoi(ch));
        }
        for(int i=0;i<a.size();i++){
            dir[i]=i;
        }
        int mx=1,st;
        dp[0]=1;
        for(int i=1;i<a.size();i++){
            dp[i]=1;
            for(int j=0;j<i;j++){
                if(a[j]<a[i]&&(dp[j]+1)>dp[i]){
                    dp[i]=dp[j]+1;
                    dir[i]=j;
                }
            }
        }
        st=distance(dp,max_element(dp,dp+a.size()));
        cout<<"Max hits: "<<dp[st]<<endl;
        vector<int>v;
        while(dir[st]!=st){
            v.push_back(a[st]);
            st=dir[st];
        }
        v.push_back(a[st]);
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<endl;
        }
        if(t!=0){
            cout<<endl;
        }
    }
    return 0;
}
