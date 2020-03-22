#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s[30];
    for(int i=1;i<=26;i++){
        s[i]='a'+i-1;
        //cout<<s[i];
    }
    int n,m,t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int j=1;
        for(int i=0;i<n;i++){
            cout<<s[j];
            j++;
            if(j>m){
                j=1;
            }
        }
        cout<<endl;
    }
    return 0;
}
