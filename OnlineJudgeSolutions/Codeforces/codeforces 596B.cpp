#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long cnt=0,b[200005]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>b[i];
    cnt+=abs(b[1]);
    for(int i=2;i<=n;i++)
    {
        cnt+=abs(b[i]-b[i-1]);
    }
    cout<<cnt<<endl;
    return 0;
}
