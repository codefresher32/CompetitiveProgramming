#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[1005]={0};
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int mn=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]>1){
            mn+=a[i+1]-a[i];
            mn--;
        }
    }
    cout<<mn<<endl;
    return 0;
}
