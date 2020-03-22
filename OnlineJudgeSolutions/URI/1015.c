#include<stdio.h>
#include<math.h>
int main()

{
    double x1,x2,y1,y2,distance,a1,a2,b1,b2,c=2.0,p;
    scanf("%lf %lf\n",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    a1 = (x2-x1);
    b1 = (y2-y1);
    a2 = pow(a1,c);
    b2 = pow(b1,c);
    p = a2+b2;
    distance = sqrt(p);
    printf("%0.4lf\n",distance);
    return 0;

}

