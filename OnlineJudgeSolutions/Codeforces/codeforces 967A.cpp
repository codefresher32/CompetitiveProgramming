#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,a[210],b[110];
    cin>>n>>s;
    for(int i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    for(int i=0,j=0;i<n,j<2*n;i++,j+=2)
    {
        b[i]=a[j]*60+a[j+1];
        b[i]++;
    }

}
