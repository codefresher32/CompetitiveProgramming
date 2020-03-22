#include <stdio.h>
#include <stdlib.h>

int main()

{
    int y,r1,r2,r3,r4;
    scanf("%d",&y);

    while(1)
    {
       y+=1;
       r1=y/1000;
       r2=y/100%10;
       r3=y/10%10;
       r4=y%10;
       if(r1!=r2 && r1!=r3 && r1!=r4 &&r2!=r3&&r2!=r4&&r3!=r4)
       {
           printf("%d\n",y);
           return 0;
       }
    }

}
