#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pi pair<string,string>
#define F first
#define S second
#define pb push_back
#define pp pop_back



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y;
    string s;
    cin>>n>>x>>y>>s;
    int cnt=0;
    if(s[n-y-1]!='1'){
        cnt++;
    }
    for(int i=n-1;i>=0&&i>=n-x;i--){
        if(s[i]=='1'&&i!=n-y-1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

/*

*/
