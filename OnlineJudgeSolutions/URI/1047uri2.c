#include<stdio.h>
int main()

{
    int h1,m1,h2,m2,time,h3,m3;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    time = (24-h1+h2)*60+(60-m1+m2);
    h3 = (time/60)-1;
    m3 = time%60;
    if(h3<=24)
     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h3,m3);
    else
         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h3-24,m3);
    return 0;
}
