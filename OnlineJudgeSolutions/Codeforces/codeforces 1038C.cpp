#include<bits/stdc++.h>
using namespace std;

int a[1000005],b[1000005];

int main()
{
    int n;
    cin>>n;
    long long s1=0,s2=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(a,a+n,greater<int>());
    sort(b,b+n,greater<int>());
    for(int i=0,j=0;i<=n&&j<=n;)
    {
        if(a[i]>=b[j]){
            s1+=a[i];
            i++;
        }
        else
            j++;
        if(b[j]>=a[i]){
            s2+=b[j];
            j++;
        }
        else
            i++;

    }
    cout<<s1-s2<<endl;
    return 0;
}


