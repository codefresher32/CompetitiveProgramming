#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.push_back(1);
    }
    cout<<v.size()<<endl;
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}


