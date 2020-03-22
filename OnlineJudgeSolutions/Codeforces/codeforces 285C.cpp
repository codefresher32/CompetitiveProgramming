#include<bits/stdc++.h>
using namespace std;

int a[300005];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    long long cnt=0;
    for(int i=1;i<=n;i++)
    {
        cnt+=abs(i-a[i]);
    }
    cout<<cnt<<endl;
    return 0;
}
