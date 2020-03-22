#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,g=0,x,l,j;
    cin>>n;
    vector<long long>a,b;
    for(int i=0;i<n;i++)
    {
        cin>>l>>j;
        g=__gcd(g,l*j);
        a.push_back(l);
        b.push_back(j);
    }
    if(g==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        x=__gcd(g,a[i]);
        if(x>1)
            g=x;
        x=__gcd(g,b[i]);
        if(x>1)
            g=x;
    }
    cout<<g<<endl;
    return 0;
}

