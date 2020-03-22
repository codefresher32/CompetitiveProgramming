#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,sum=0,a[105]={0},x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    bool id[105];
    memset(id,true,sizeof(id));
    sum/=n/2;
    for(int i=0;i<n;i++){
        if(id[i]){
            id[i]=false;
            x=sum-a[i];
            for(int j=0;j<n;j++){
                if(x==a[j]&&id[j]){
                    cout<<i+1<<" "<<j+1<<endl;
                    id[j]=false;
                    break;
                }
            }
        }
    }
    return 0;
}


