#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, k;
    float f,f2;

    cin>>n;

    float x=-10000000;
    for(i=0;i<n;i++)
    {
        cin>>f;

        if(f<0)
        {
            x=max(x,f);
            continue;
        }

        f2=f;
        f=sqrt(f);

        if(f!=ceil(f))
            x=max(x,f2);
    }

    k=x;
    cout<<k<<endl;

    return 0;
}

