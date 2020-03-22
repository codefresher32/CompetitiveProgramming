#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[100005]={0},b[100005]={0};
    cin>>n;
    multiset<int>st;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int mn=0,mx=0,ans=2,z,j=1;
    for(int i=1;i<=n&&j<=n;){
       //j=i;
       while(mx-mn<=1&&j<=n){
            st.insert(a[j]);
            b[a[j]]++;
            mn=*st.begin();
            mx=*st.rbegin();
            j++;
       }
       z=st.size();
       ans=max(ans,(mx-mn>1)?z-1:z);
       while(b[mn]!=0&&i<=n&&mx-mn>1){
            st.erase(st.find(a[i]));
            b[a[i]]--;
            i++;
            mn=*st.begin();
            mx=*st.rbegin();
       }
    }
    cout<<ans<<endl;
    return 0;
}

