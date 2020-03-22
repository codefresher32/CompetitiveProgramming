#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,A,r,s;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        if(a==0&&b==0&&c==0)
        {
            s=1;
            A=0;
        }
        printf("The radius of the round table is: %0.3f\n",A/s);
    }
    return 0;
}
