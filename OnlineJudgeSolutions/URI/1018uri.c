#include<stdio.h>
int main()

{
    int N,h,fif,tw,te,fiv,two,o;
    scanf("%d",&N);
    if(N>0&&N<1000000)
    {
    h = N/100;
    fif = (N-(h*100))/50;
    tw = (N-(h*100+fif*50))/20;
    te = (N-(h*100+fif*50+tw*20))/10;
    fiv = (N-(h*100+fif*50+tw*20+te*10))/5;
    two = (N-(h*100+fif*50+tw*20+te*10+fiv*5))/2;
    o = (N-(h*100+fif*50+tw*20+te*10+fiv*5+two*2))/1;
    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",h);
    printf("%d nota(s) de R$ 50,00\n",fif);
    printf("%d nota(s) de R$ 20,00\n",tw);
    printf("%d nota(s) de R$ 10,00\n",te);
    printf("%d nota(s) de R$ 5,00\n",fiv);
    printf("%d nota(s) de R$ 2,00\n",two);
    printf("%d nota(s) de R$ 1,00\n",o);
    }
    return 0;
}
