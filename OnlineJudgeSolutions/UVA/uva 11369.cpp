#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,a[20005]={0};
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        int sum=0;
        for(int i=n%3+1;i<=n;i+=3)
            sum+=a[i];
        cout<<sum<<endl;
    }
    return 0;
}
