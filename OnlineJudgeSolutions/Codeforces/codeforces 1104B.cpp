#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int l;
    cin>>s;
    l=s.size();
    int cnt=0;
    for(int i=0;i<l-1;i++){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            cnt++;
            i-=2;
            l-=2;
        }
    }
    if(cnt%2==0){
        cout<<"No\n";
    }
    else{
        cout<<"Yes\n";
    }
    return 0;
}


