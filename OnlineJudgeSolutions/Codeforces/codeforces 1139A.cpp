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
    int cnt=0,x,n;
    cin>>n>>s;
    int l;
    l=s.size();
    for(int i=l-1;i>=0;i--){
        x=s[i]-'0';
        if(x%2==0){
            cnt+=i+1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


