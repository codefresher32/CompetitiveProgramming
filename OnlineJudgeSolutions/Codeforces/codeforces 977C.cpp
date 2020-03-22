#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a[200002];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    a[n]=-1;
    if(k==0)
    {
        if(a[0]==1){
        cout<<-1<<endl;
        return 0;
        }
        else
        {
            cout<<1<<endl;
            return 0;
        }
    }
    if(a[k-1]!=a[k])
    {
        cout<<a[k-1]<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}
