#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d[101]={0},a,b,sum=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>d[i];
    }
    cin>>a>>b;
    for(int i=a;i<b;i++)
    {
        sum+=d[i];
    }
    cout<<sum<<endl;
}
