#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    for(int x=0;x<=1000;x++)
    {
       for(int y=0;y<=1000;y++)
       {
           if(a*x+b==c*y+d)
           {
               cout<<a*x+b<<endl;
               return 0;
           }
       }
    }
    cout<<"-1\n";
    return 0;
}
