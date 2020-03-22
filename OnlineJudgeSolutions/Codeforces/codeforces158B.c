 #include <stdio.h>

 int main()

 {
     int n,i,c1=0,c2=0,c3=0,c4=0,sum=0;
     scanf("%d",&n);
     int p[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&p[i]);
     }
     for(i=0;i<n;i++)
     {
         if(p[i]==1)
         {
             c1++;
         }
         else if(p[i]==2)
         {
             c2++;
         }
         else if(p[i]==3)
         {
             c3++;
         }
         else  c4++;
     }
     sum=c4+c3+c2/2;
     c1-=c3;
     if(c2%2==1)
     {
         sum+=1;
         c1-=2;
     }
     if(c1>0)
     {
         sum+=(c1+3)/4;
     }
    printf("%d\n",sum);
     return 0;
 }
