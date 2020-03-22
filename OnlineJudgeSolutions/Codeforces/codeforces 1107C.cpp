#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,a[200005]={0};
    string s;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s;
    int cnt=0;
    ll ans=0;
    char ch;
    for(int i=0;i<n;){
       ch=s[i];
       int j=i;
       while(ch==s[j]){
         cnt++;
         j++;
       }

       sort(a+i,a+j,greater<int>());
       for(int l=i;l<min(i+k,j);l++){
            ans+=a[l];
       }
       i+=cnt;
       cnt=0;
    }
    cout<<ans<<endl;
    return 0;
}


