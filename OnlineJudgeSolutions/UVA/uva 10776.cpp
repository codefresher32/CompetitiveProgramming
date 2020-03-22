#include<bits/stdc++.h>
using namespace std;

string s;
int num[35],n,k;
bool vis[35];
vector<char>p;

void subset(int id)
{
    if(p.size()==k){
        for(auto ch:p){
            cout<<ch;
        }
        cout<<endl;
        return ;
    }
    for(int i=id;i<n;i++){
        if(!vis[i]){
            vis[i]=1;
            p.push_back(s[i]);
            subset(i+1);
            p.pop_back();
            vis[i]=0;
            while(i+1<n&&s[i]==s[i+1]){
                i++;
            }
        }
    }
}

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    while(cin>>s>>k){
        n=s.size();
        sort(s.begin(),s.end());
        subset(0);
        memset(vis,0,sizeof(vis));
        p.clear();
    }
    return 0;
}

