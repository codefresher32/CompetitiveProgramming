#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define pp pop_back

int StoI(string s,int n)
{
    int r=0;
    for(int i=0;i<s.size();i++){
        r=(r*10)+(s[i]-'0');
        r%=n;
    }
    return r;
}


string bfs(int n)
{
    map<int,bool>vis;
    queue<string>q;
    string s="1";
    int u;
    q.push(s);
    while(!q.empty()){
        s=q.front();
        q.pop();
        u=StoI(s,n);
        if(u==0){
            return s;
        }
        else if(!vis[u]){
            vis[u]=1;
            q.push(s+"0");
            q.push(s+"1");
        }
    }

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        s=bfs(n);
        cout<<s<<endl;
    }

    return 0;
}


