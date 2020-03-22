#include<stdio.h>
int main()

{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(z>x&&z>y)
    {
        if(x>y){
            printf("%d\n%d\n%d\n",y,x,z);
            printf(" \n%d\n%d\n%d\n",x,y,z);}
        else {
            printf("%d\n%d\n%d\n",x,y,z);
            printf(" \n%d\n%d\n%d\n",x,y,z);}
    }
    else if(y>z&&y>x)
    {
        if(x>z) {
            printf("%d\n%d\n%d\n",z,x,y);
            printf(" \n%d\n%d\n%d\n",x,y,z);}

        else {
            printf("%d\n%d\n%d\n",x,z,y);
            printf(" \n%d\n%d\n%d\n",x,y,z);}
    }
    else if(x>y&&x>z)
    {
        if(y>z) {
            printf("%d\n%d\n%d\n",z,y,x);
            printf(" \n%d\n%d\n%d\n",z,x,y);}
        else {
            printf("%d\n%d\n%d\n",y,z,x);
            printf(" \n%d\n%d\n%d\n",x,y,z);}
    }
    return 0;
}


