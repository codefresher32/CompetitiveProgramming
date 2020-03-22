#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[105]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int cnt=0;
    for(int i=2;i<n;i++){
        if(a[i]==0&&a[i-1]==1&&a[i+1]==1){
            cnt++;
            i+=2;
        }

    }
    cout<<cnt<<endl;
    return 0;
}

