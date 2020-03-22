#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[1010],b[1010];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];

    int k=0,l=0,c=0;
    while(k<n&&l<m)
    {
        if(a[k]<=b[l])
        {
            c++,k++,l++;
        }
        else
        {
            k++;
        }
    }
    cout<<c<<endl;
    return 0;
}
