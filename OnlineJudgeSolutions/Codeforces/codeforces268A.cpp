#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,c=0,x,y,len;
    cin >> n;
    len=n*2;
    int a[len];
    for(i=0;i<len;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<len;i+=2)
    {
        x=a[i];
        y=a[i+1];
        for(j=i+2;j<len;j+=2)
        {
            if(x==a[j+1])
            {
                c++;
            }
            if(y==a[j])
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
