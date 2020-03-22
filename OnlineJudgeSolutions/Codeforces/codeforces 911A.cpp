#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,a[100005]={0};
    cin>>n;
    int mn=INT_MAX,tr=-1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mn=min(mn,a[i]);
    }
    int df=INT_MAX;
    for(int i=1;i<=n;i++){
        if(a[i]==mn){
            if(tr==-1){
                tr=i;
            }
            else{
              df=min(df,i-tr);
              tr=i;
            }
        }
    }
    cout<<df<<endl;
    return 0;
}


