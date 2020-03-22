#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,un,l;
    map<char,int>dp;
    string s,o;
    cin>>n>>s;
    for(int i=0;i<n;i++){
       dp[s[i]]++;
    }
    o=s;
    sort(o.begin(),o.end());
    o.erase(unique(o.begin(),o.end()),o.end());
    un=o.size();
    int i=0,j=n-1,x,y;
    l=n;
    while(i<=j){
        if(dp[s[i]]!=1&&l>un){
            dp[s[i]]--;
            i++;
            l--;
        }
        else if(dp[s[j]]!=1&&l>un){
            dp[s[j]]--;
            j--;
            l--;
        }
        else{
            break;
        }
    }
    x=j-i+1;
    dp.clear();
    for(int i=0;i<n;i++){
       dp[s[i]]++;
    }
    i=0,j=n-1,l=n;
    while(i<=j){
        if(dp[s[j]]!=1&&l>un){
            dp[s[j]]--;
            j--;
            l--;
        }
        else if(dp[s[i]]!=1&&l>un){
            dp[s[i]]--;
            i++;
            l--;
        }
        else{
            break;
        }
    }
    y=j-i+1;
    cout<<min(x,y)<<endl;
    return 0;
}

