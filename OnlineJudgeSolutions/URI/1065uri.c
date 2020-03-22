#include<stdio.h>
int main()

{
    int a[10],i,c = 0;
    for(i = 0 ;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i<5;i++)
    {
        if(a[i]%2 == 0)
    {
        c++;
    }
    }
    printf("%d valores pares\n",c);
    return 0;
}
