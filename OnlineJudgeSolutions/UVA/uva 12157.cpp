#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,m,j,s;
    while(cin>>t)
    {
        k=1;
        while(t--)
        {
            m=j=0;
            cin>>n;
            while(n--)
            {
                cin>>s;
                m+=(s/30)*10+10;
                j+=(s/60)*15+15;

            }
            if(m<j)
                {
                    cout<<"Case "<<k<<": "<<"Mile "<<m<<endl;
                }
                else if(m>j)
                {
                    cout<<"Case "<<k<<": "<<"Juice "<<j<<endl;
                }
                else if(m==j)
                {
                    cout<<"Case "<<k<<": "<<"Mile Juice "<<j<<endl;
                }
                k++;
        }
    }
    return 0;
}

