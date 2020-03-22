#include<bits/stdc++.h>
using namespace std;

long long int a[100000];
long long int b[100000];
set<long long int>s;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    s.insert(a[n]);
    for(int i=n-1;i>0;i--)
    {
        b[a[i]]=s.size();
        s.insert(a[i]);
    }
    long long int c=0;
    for(int i=1;i<=n;i++)
        c+=b[i];
    cout<<c<<endl;
    return 0;
}
