#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll convert(string s)
{
    ll temp=0;
    for(int i=0;i<s.size();i++){
        temp=temp*10+((s[i]-'0')&1);
    }
    return temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<ll,int>m;
    int t,n;
    ll temp;
    string s;
    char c;
    cin>>t;
    while(t--){
        cin>>c>>s;
        temp=convert(s);
        if(c=='+'){
            m[temp]++;
        }
        else if(c=='-'){
            m[temp]--;
        }
        else{
            cout<<m[temp]<<endl;
        }
    }
    return 0;
}
