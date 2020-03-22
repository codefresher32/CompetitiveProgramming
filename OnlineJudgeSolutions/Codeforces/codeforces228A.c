#include <stdio.h>

int main()

{
    long int a,b,c,d;

    scanf("%ld%ld%ld%ld",&a,&b,&c,&d);

    if ( (a==b) &&(b==c)&&(c==d) )
        { printf("3");
    return 0;}

    if ( ((a==b) && (b==c)) || ((a==b)&& (b==d)) || ((a==c)&&(c==d))||((b==c)&&(c==d)))
        { printf("2");
    return 0; }

    if (((a==b)&&(c==d)) || (( a==c)&&( b==d))||((a==d)&&b==c))
        { printf("2");
    return 0; }

    if( ( a==b) || (a==c) ||( a==d)||(b==c) ||(b==d)||(c==d))
        { printf("1");
    return 0;}

    printf("0");

    return 0;
}
