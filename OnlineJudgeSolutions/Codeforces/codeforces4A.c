#include<stdio.h>
int main()

{
    int w ;
    scanf("%d",&w);
    if(w%2==0)
    {
        if(w==2)
            printf("No\n");
        else
            printf("Yes\n");
    }
    else
        printf("No\n");
    return 0;
}
