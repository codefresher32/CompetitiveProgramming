#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    int arr[10005]={0};
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        for(int j=a;j<b;j++)
            arr[j]=1;
    }
    int c=0;
    for(int i=0;i<m;i++)
    {
        c+=arr[i];
    }
    if(c>=m)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
