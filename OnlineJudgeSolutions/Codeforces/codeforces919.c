#include<stdio.h>


int main()
{
   int n,m;
   double a,b,x,y=100000000;
   scanf("%d %d",&n,&m);
       while(n--)
       {
           scanf("%lf %lf",&a,&b);
           x=a/b;
           if(x<y)
           {
               y=x;
           }
       }
       printf("%0.8f\n",m*y);

   return 0;
}

