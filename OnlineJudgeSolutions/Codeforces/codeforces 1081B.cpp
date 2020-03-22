#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[100005]={0},b[100005]={0},c=0;
    cin>>n;
    vector<int>v[100005];
    for(int i=0;i<n;i++){
        cin>>a[i];
        v[n-a[i]-1].push_back(i);
    }
    for(int i=0;i<=n;i++){
        if(v[i].size()%(i+1)){
            cout<<"Impossible\n";
            return 0;
        }
        for(int j=0;j<v[i].size();j++){
            if(j%(i+1)==0){
                c++;
            }
            b[v[i][j]]=c;
        }
    }
    cout<<"Possible\n";
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

    return 0;
}

