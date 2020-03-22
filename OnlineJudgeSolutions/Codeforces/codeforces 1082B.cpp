#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    bool f=0;
    cin>>n>>s;
    int gd=0,si=0,fg=0,lg=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]=='G'&&fg==0){
            fg=i+1;
        }
       if(s[i]=='G'){
            gd++;
            lg=i+1;
       }
       else{
            si++;
            v.push_back(i+1);
            if(i+1==n){
                f=1;
            }
       }
    }
    if(!f){
        v.push_back(n+1);
    }
    if(si==n){
        cout<<0<<endl;
        return 0;
    }
    if(gd==n){
        cout<<n<<endl;
        return 0;
    }
    int mx=-1,d,pr=0,cnt=1;
    for(int i=0;i<n-1;i++){
        if(s[i]!='S'&&s[i]==s[i+1]){
                cnt++;
        }
        else{
            cnt=1;
        }
        mx=max(mx,cnt);
    }
    mx=max(mx,cnt);
    if(gd!=1){
        for(int i=0;i<v.size()-1;i++){
        d=v[i]-pr;
        if(v[i+1]-v[i]-1>0){
            d+=(v[i+1]-v[i]-1);
            if(v[i+1]>lg||fg>v[i]){
                d--;
            }
        }
        mx=max(d,mx);
        pr=v[i];
    }
    }
    cout<<mx<<endl;
    return 0;
}

