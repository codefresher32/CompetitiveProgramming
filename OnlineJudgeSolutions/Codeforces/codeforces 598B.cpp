#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l,r,k,m,len,x;
    string s,re;
    cin>>s>>m;
    while(m--){
        cin>>l>>r>>k;
        len=r-l+1;
        k%=len;
        re=s;
        l--;
        r--;
        for(int i=l;i<=r;i++){
            x=l+(i-l+k)%len;
            re[x]=s[i];
        }
        s=re;
    }
    cout<<s<<endl;
    return 0;
}

