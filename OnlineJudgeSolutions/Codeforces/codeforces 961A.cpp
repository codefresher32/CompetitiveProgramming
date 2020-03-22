#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,mn=INT_MAX;
    int arr[10000]= {0};
    cin>>n>>m;
    while(m--)
    {
        cin>>i;
        arr[i]++;
    }
    for(i=1; i<=n; i++)
    {
        mn = min(mn,arr[i]);
    }
    cout<<mn<<endl;
    return 0;
}
