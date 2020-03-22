#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,s1=0,s2=0;
    cin>>n>>m;
    int a[100005]={0},b[100005]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int j=1;j<=m;j++){
        cin>>b[j];
    }
    int l=1,r=1,cnt=-1;
    while(true){
        if(s1==s2){
           cnt++;
           s1=s2=0;
           s1+=a[l];
           s2+=b[r];
           if(l>n&&r>m){
            break;
           }
           l++,r++;
        }
        else if(s1<s2){
            s1+=a[l];
            l++;
        }
        else{
            s2+=b[r];
            r++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
