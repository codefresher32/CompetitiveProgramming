#include<bits/stdc++.h>
#include<string>
using namespace std;

int rev(int n)
{
    int d,r=0;
    a:while(n>0)
    {
        r+=n%10;
        n/=10;
    }
    if(r>9)
    {
        n=r;
        r=0;
        goto a;
    }
    return r;
}
int main()
{
    char s1[30],s2[30];
    int sum1,sum2;
    double x;
    while(gets(s1))
    {
        gets(s2);
        sum1=sum2=0;
        for(int i=0;i<strlen(s1);i++)
        {
            if(s1[i]>='a'&&s1[i]<='z')
            {
                sum1+=s1[i]-'a'+1;
            }
            else if(s1[i]>='A'&&s1[i]<='Z')
            {
                sum1+=s1[i]-'A'+1;
            }
        }
        for(int i=0;i<strlen(s2);i++)
        {
            if(s2[i]>='a'&&s2[i]<='z')
            {
                sum2+=s2[i]-'a'+1;
            }
            else if(s2[i]>='A'&&s2[i]<='Z')
            {
                sum2+=s2[i]-'A'+1;
            }
        }
        sum1=rev(sum1);
        sum2=rev(sum2);
        if(sum1>sum2)
        {
            swap(sum1,sum2);
        }
        x=((1.0*sum1)/(1.0*sum2))*100.00;
        printf("%0.2f %%\n",x);
    }
    return 0;
}
