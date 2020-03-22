#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}

int main()

{
    int n,i,j,c=0;

    cin>>n;

    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n,cmp);
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=1;i<=n;i++)
    {
        if(a[n]>a[i])
        {
            c++;
            break;
        }
    }

    if(c==0)
    {
        cout<<"Agasa"<<endl;
        return 0;
    }
    cout<<"Conan"<<endl;
    return 0;
}
