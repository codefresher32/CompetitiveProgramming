#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l;
    vector<string>v;
    cin>>n;
    string s,p="abcdefghijklmnopqrstuvwxyz",x;
    for(int i=1;i<=n;i++){
        cin>>s;
        v.push_back(s);
    }
    int cnt;
    for(int i=1;i<=2;i++){
        for(int x=0;x<26;x++){
            for(int k=0;k<26;k++){
                s="";
                if(i==1){
                    s+=p[k];
                }
                else{
                    s+=p[x];
                    s+=p[k];
                }
                cnt=n;
                for(int j=0;j<n;j++){
                   // x=v[j];
                    if(v[j].find(s)!=string::npos){
                        cnt--;
                    }
                }
                if(cnt==n){
                    cout<<s<<endl;
                    return 0;
                }
            }
            if(i==1){
                break;
            }
        }
    }
    return 0;
}

