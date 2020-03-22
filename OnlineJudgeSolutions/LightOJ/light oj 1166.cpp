#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p=0;
    int n,a[105],b[105];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            //b[i]=a[i];
        }
        //sort(b,b+n);
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(a[i]!=i){
                for(int j=i+1;j<=n;j++){
                    if(a[j]==i){
                        swap(a[i],a[j]);
                        cnt++;
                    }
                }
            }
        }
        printf("Case %d: %d\n",++p,cnt);
    }
    return 0;
}
