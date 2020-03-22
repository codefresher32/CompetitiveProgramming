#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int a,b,x,y;
    while(cin>>a>>b)
    {
        if((a&&b)==0)
        {
            return 0;
        }
        x=sqrt(b);
        y=sqrt(a-1);
        cout<<x-y<<endl;
    }
}
