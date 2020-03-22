#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define pb push_back
#define ppb pop_back
#define F first
#define S second



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s1[20],s2[20],s3[20];
    map<string,int>mp;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s1[i]>>s2[i]>>s3[i];
    }
    int mx=1,cnt;
    for(int i=1;i<=n;i++){
        mp[s1[i]]++;
        mp[s2[i]]++;
        mp[s3[i]]++;
        cnt=1;
        for(int j=1;j<=n;j++){
            if(i==j){
                continue;
            }
            if(!mp[s1[j]]&&!mp[s1[j]]&&!mp[s1[j]]){
                cnt++;
                mp[s1[j]]++;
                mp[s2[j]]++;
                mp[s3[j]]++;
            }
            mx=max(mx,cnt);
        }
        mp.clear();
    }
    cout<<mx<<endl;
    return 0;
}
