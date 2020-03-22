#include<stdio.h>
int main()

{
    int k,n,w,i,j,temp=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        temp=temp+k*i;
    }
    n=temp-n;
    if(n>=0){
    printf("%d\n",n);}
    else
        printf("0\n");
    return 0;
}
