#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    string s;
    cin>>n>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='8'){
            cnt++;
        }
    }
        k=min(n/11,cnt);

    cout<<k<<endl;
    return 0;
}


