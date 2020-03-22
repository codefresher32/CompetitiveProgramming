#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string s[5];
bool vis[5][105];
int cnt,n;


void dfs(int x)
{
    int nx,ny;
    if(s[0][x-1]=='0'&&x>0){
        cnt++;
        s[0][x-1]='X';
    }
    else if(s[1][x-1]=='0'&&x>0){
        cnt++;
        s[1][x-1]='X';
    }
    else if(s[0][x+1]=='0'&&x<n-1){
        cnt++;
        s[0][x+1]='X';
    }
    else if(s[1][x+1]=='0'&&x<n-1){
        cnt++;
        s[1][x+1]='X';
    }

    //s[x][y]='.';
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,l;
    for(int i=0;i<2;i++){
       cin>>s[i];
    }
    n=s[0].size();
    for(int j=0;j<n;j++){
        if(s[0][j]=='0'&&s[1][j]=='0'){
            s[0][j]='X';
            s[1][j]='X';
            dfs(j);
            //cout<<cnt<<endl;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

