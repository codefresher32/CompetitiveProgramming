#include<bits/stdc++.h>
using namespace std;

int main()
{
    double c,i,f;
    int t,x=1;
    cin>>t;
    while(t--)
    {
        cin>>c>>i;
        f=(9.0*c)/5.0+32.0;
        f+=i;
        c=(f-32)*5.0/9.0;
        cout<<"Case "<<x<<": ";
        cout<<fixed<<setprecision(2)<<c<<endl;
        x++;
    }
    return 0;
}
