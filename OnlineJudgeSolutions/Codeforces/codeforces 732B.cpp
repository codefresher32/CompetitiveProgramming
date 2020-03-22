#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x,sum=0;
    vector<int>a,b;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    b=a;
    for(int i=0;i<n-1;i++)
    {
        if(b[i]+b[i+1]<k)
        {
            b[i+1]=(k-b[i]);
            sum+=b[i+1]-a[i+1];
        }
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}
