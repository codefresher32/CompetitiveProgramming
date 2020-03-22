
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[1001]={0},c=1;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int mx=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            a[i]=0;
            c++;
        }
        else
        {
            mx=max(mx,c);
            c=1;
        }
    }
    mx=max(mx,c);
    int cn=0;
    for(int i=0;i<n;i++)
       if(a[i]!=0)
        cn++;

    cout<<mx<<" "<<cn<<endl;
}
