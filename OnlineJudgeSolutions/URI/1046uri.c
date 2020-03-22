#include<stdio.h>
int main()

{
    int st,ed,time;
    scanf("%d %d",&st,&ed);
    time = (24 - st) + ed;
    if (time <= 24)
        printf("O JOGO DUROU %d HORA(S)\n",time);
    else
        printf("O JOGO DUROU %d HORA(S)\n",(time-24));
    return 0;
}
