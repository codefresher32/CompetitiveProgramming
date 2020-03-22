#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[200005]={0};
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s;
    int l=0,r=0;
    for(int i=0;i<n-1;i++){
        l=i;
        while(s[i]=='1'){
            i++;
        }
        sort(a+l,a+1+i);
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}



