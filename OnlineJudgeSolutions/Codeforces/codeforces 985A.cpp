#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m1,m2,a[55]={0};
    cin>>n;
    for(int i=0;i<n/2;i++)
        cin>>a[i];

    m1=m2=0;
    sort(a,a+n/2);
    for(int i=0;i<n/2;i++)
    {
        m1+=abs(a[i]-(i*2+1));
        m2+=abs(a[i]-(i*2+2));
    }
    cout<<min(m1,m2)<<endl;
    return 0;
}
