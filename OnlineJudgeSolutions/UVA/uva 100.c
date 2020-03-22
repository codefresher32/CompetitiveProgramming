#include<stdio.h>
int main()

{
    int n,k,i,j,l,c=1,max;
    while(scanf("%d %d",&i,&j)==2)
        {
            max=0;
    printf("%d %d ",i,j);
    if(i>j)
    {
        l=i;
        i=j;
        j=l;
    }
    for(k=i;k<=j;k++){
            c=1;
            n=k;
    while(n!=1){
        if(n%2!=0)
        {
            n=n*3+1;
        }
        else
        {
            n=n/2;
        }
        c++;
        }
    if(max<c)
    {
        max=c;
    }
    }
    printf("%d\n",max);
    }
    return 0;
}
