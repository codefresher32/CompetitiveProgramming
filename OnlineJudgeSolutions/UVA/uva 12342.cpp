#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst,b,i;
    double a,tax;
    scanf("%d",&tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%lf",&a);
        tax=0;
        if(a<=180000)
            tax=0;
        else
        {
            a-=180000;
            if(a>0)
            {
                if(a>300000)
                    tax+=30000;
                else tax+=(a*0.1);
                a-=300000;
                if(a>0)
                {
                    if(a>400000)
                        tax+=60000;
                    else tax+=(a*0.15);
                    a-=400000;
                    if(a>0)
                    {
                        if(a>=300000)
                            tax+=60000;
                        else tax+=(a*0.2);
                        a-=300000;
                        if(a>0)
                            tax+=(a*0.25);
                    }
                }
            }
        }
        tax=ceil(tax);
        if(tax>0 && tax<=2000)
            printf("Case %d: 2000\n",i);
        else if(tax>2000)
            printf("Case %d: %.0f\n",i,tax);
        else
            printf("Case %d: 0\n",i);

    }
    return 0;
}
