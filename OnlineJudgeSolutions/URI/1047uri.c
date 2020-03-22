#include<stdio.h>
int main()

{
    int s_h,e_h,s_m,e_m,d_h,d_m;
    scanf("%d %d %d %d",&s_h,&s_m,&e_h,&e_m);

    d_h = (e_h - s_h);
    if(d_h<0)
    {
        d_h = 24 + (e_h - s_h);
    }
    d_m = (e_m - s_m);
    if(d_m<0)
    {
        d_m = 60 +(e_m - s_m);
        d_h --;
    }
     if (s_h == e_h && s_m == e_m)

    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d_h, d_m);
    return 0;

}
