#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=n,j=1;j<=k;i--,j++)
        cout<<i<<" ";
    for(int i=1;i<=(n-k);i++)
        cout<<i<<" ";
    return 0;
}
