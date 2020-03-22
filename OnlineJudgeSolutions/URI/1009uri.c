#include<stdio.h>>
int main()

{
    char name;
    double salary,interest,total;
    scanf("%s %lf %lf",&name,&salary,&interest);
    total = salary+(interest*0.15);
    printf("TOTAL = R$ %0.2lf\n",total);
    return 0;
}
