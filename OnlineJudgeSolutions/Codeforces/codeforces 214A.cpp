#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c=0;
    cin>>n>>m;

    for(int a=0;a<=m;a++)
    {
        for(int b=0;a*a+b<=n&&a+b*b<=m;b++)
        {
            if(a*a+b==n&&a+b*b==m)
                c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
