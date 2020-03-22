#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 1000005


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,x,y,k,u;
    vector<vector<int>>v;
    while(cin>>n>>m){
        v=vector< vector<int> >(MAX, vector<int>(0));
        for(int i=1;i<=n;i++){
            cin>>x;
            v[x].push_back(i);
        }
        while(m--){
            cin>>k>>u;
            if(v[u].size()<k){
                printf("0\n");
            }
            else{
                printf("%d\n",v[u][k-1]);
            }
        }
    }
    return 0;
}
