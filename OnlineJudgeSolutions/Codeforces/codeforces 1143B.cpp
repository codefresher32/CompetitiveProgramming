#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define ppb pop_back

int p(string s)
{
    int ans=1;
    for(int i=0;i<s.size();i++){
       ans*=s[i]-'0';
    }
    return ans;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2,s3;
    int mx,l,ans;
    cin>>s1;
    mx=p(s1);
    l=s1.size();
    for(int i=0;i<l;i++){
        if(s1[i]=='0'){
            continue;
        }
        s2=s1;
        s2[i]=(s2[i]-'0'-1)+'0';
        if(s2[i]=='0'){
            s2[i]='1';
        }
        for(int j=i+1;j<l;j++){
            s2[j]='9';
        }
        ans=p(s2);
        if(mx<ans){
            mx=ans;
        }
    }
    cout<<mx<<endl;
    return 0;
}

