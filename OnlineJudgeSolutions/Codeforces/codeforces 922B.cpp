#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,cnt=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            k=i^j;
            if(k>n||k<j||(i+j)<=k)
                continue;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
