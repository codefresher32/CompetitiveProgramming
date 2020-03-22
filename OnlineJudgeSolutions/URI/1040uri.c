#include<stdio.h>
int main()

{
    float n1,n2,n3,n4,a1,a2,es;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    a1 = (n1*2+n2*3+n3*4+n4*1)/10;
    if(a1 >=5.0& a1<=6.9)
    {
        scanf("%f",&es);
    }
    printf("Media: %0.1f\n",a1);
    if(a1>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(a1<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(a1 >=5.0& a1<=6.9)
    {
        printf("Aluno em exame.\n");
        printf("Nota do exame: %0.1f\n",es);
        a2 = (a1+es)/2;
        if(a2 >=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %0.1f\n",a2);}
            else if(a2<=4.9)
            {
                printf("Aluno reprovado.\n");
                printf("Media final: %0.1f",a2);
            }

    }
    return 0;
}
