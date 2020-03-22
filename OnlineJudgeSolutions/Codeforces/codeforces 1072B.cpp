#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[100005]={0},b[100005]={0};
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>b[i];
    }
    int t[100005]={0},j=0,x1=0,x2=0,tr;
    int t1,t2;
    for(int i=0;i<n-1;i++){
       t1=a[i]|b[i];
       t2=a[i]&b[i];
       if(t1!=a[i]||t2!=b[i]){
        cout<<"NO\n";
        return 0;
       }
       if(i==n-2){
        if(tr==a[i]){
            t[j++]=b[i];
        }
        else{
            t[j++]=a[i];
        }
        continue;
       }
        if(a[i]==a[i+1]||a[i]==b[i+1]){
           x1=1;
        }
        if(b[i]==a[i+1]||b[i]==b[i+1]){
           x2=1;
        }
        if(x1==0){
            tr=a[i];
            t[j++]=a[i];
        }
        else if(x2==0){
            tr=b[i];
            t[j++]=b[i];
        }
        else if(x1==1&&x2==1){
            tr=a[i];
            t[j++]=a[i];
        }
        x1=x2=0;
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++){
        cout<<t[i]<<" ";
    }
    return 0;
}
