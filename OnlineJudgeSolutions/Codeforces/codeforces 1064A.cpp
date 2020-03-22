#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    int sum=a[0]+a[1];
    int in=a[2]-sum+1;
    if(in<0){
        in=0;
    }
    cout<<in<<endl;
    return 0;
}

