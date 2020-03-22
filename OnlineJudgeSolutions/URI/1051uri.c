#include<stdio.h>
int main()

{
    float s,pt,x,y;
    scanf("%f",&s);
    if(s >= 0&&s <= 2000.00)
    {
        printf("Isento\n");
    }
    else if(s >= 2000.01&& s <= 3000.00)
    {
        pt = (s-2000)*0.08;
        printf("R$ %0.2f\n",pt);
    }
    else if(s >= 3000.01&& s <= 4500.00)
    {
        x = (s-2000);
        if(x == 1000.00)
        {
            pt =
        }
    }

}
