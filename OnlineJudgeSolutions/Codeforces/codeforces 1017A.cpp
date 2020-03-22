#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,c,d,x,y=0,k=1;
    cin>>n;
    cin>>a>>b>>c>>d;
        x=a+b+c+d;
    for(int i=1;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        y=a+b+c+d;
        if(x<y)
            k++;

    }
    cout<<k<<endl;
    return 0;
}
