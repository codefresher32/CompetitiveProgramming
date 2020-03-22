#include<stdio.h>
int main()

{
    int x,c=0;
    scanf("%d",&x);
    while(x!=0){
    if(x>=5)
    {
        c++;
        x-=5;
    }
    else if(x==4)
    {
        c++;
        x-=4;
    }
    else if(x==3)
    {
        c++;
        x-=3;
    }
    else if(x==2)
    {
        c++;
        x-=2;
    }
    else if(x==1)
    {
        c++;
        x--;
    }
    }
    printf("%d\n",c);
    return 0;
}
