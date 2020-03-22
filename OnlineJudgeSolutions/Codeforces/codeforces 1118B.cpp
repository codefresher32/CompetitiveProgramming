#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pii pair<int,int>



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[200005]={0};
    ll odd=0,even=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i&1){
            odd+=a[i];
        }
        else{
            even+=a[i];
        }
    }
    ll s=0,x,y,p=0,q=0,cnt=0;
    for(int i=1;i<=n;i++){
        if(i&1){
           odd-=a[i];
        }
        else{
            even-=a[i];
        }
        if(i%2==0){
            if(odd+q==even+p){
                cnt++;
            }
        }
        else{
            if(odd+q==even+p){
                cnt++;
            }
        }


        if(i&1){
            p+=a[i];
        }
        else{
            q+=a[i];
        }

    }
    cout<<cnt<<endl;
    return 0;
}


