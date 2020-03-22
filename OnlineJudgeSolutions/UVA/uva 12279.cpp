#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,c1,c2,j=1,x;
    while(cin>>n)
    {
        x=n;
        c1=0,c2=0;
        if(n==0)
        {
            return 0;
        }
        while(x--)
        {
            cin>>a;
            if(a>0)
            {
                c1++;
            }
            else if(a==0)
            {
                c2++;
            }
        }
        cout<<"Case "<<j<<": ";
        cout<<c1-c2<<endl;
        j++;
    }

}
