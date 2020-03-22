#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin>>n>>s;
    int a[30]={0};
    for(int i=0;i<n-1;i++){
       if(s[i]!=s[i+1]){
            cout<<"YES\n"<<s[i]<<s[i+1]<<endl;
            return 0;
       }
    }
    cout<<"NO\n";
    return 0;
}
