#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,a[50]={0};
    string s;
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        a[s[i]-'A']++;
    }
    sort(a,a+30,greater<int>());
    int cap=0,j=0;
    long long ans=0;
    while(k>0)
    {
        if(a[j]<=k)
        {
            ans+=a[j]*a[j];
            k-=a[j];
        }
        else if(a[j]>k)
        {
            ans+=k*k;
            k-=k;
        }
        if(a[j]==0)
            break;
        j++;
    }
    cout<<ans<<endl;
    return 0;
}
