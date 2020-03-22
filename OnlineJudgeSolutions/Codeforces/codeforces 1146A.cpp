#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int l,cnt=0;
    cin>>s;
    l=s.size();
    for(int i=0;i<l;i++){
        if(s[i]=='a'){
            cnt++;
        }
    }
    if(cnt>l/2){
        cnt=l;
    }
    else{
       cnt=2*cnt-1;
    }
    cout<<cnt<<endl;
    return 0;
}

