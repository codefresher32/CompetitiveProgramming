#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int a,b,x,c,s,n;

    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            return 0;
        s=0;
        if(a>b)
            swap(a,b);
        for(int i=a;i<=b;i++)
        {
            c=0;
            n=i;
            do
            {
                if(n%2==0)
                    n/=2;
                else
                    (n*=3)++;
                c++;
            }
            while(n!=1);
            if(s<c)
            {
                s=c;
                x=i;
            }
        }
        printf("Between %d and %d, %d generates the longest sequence of %d values.\n",a,b,x,s);
    }
}
