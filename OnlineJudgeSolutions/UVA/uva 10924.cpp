#include<bits/stdc++.h>
using namespace std;

void isprime(int n)
{

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
             cout<<"It is not a prime word.\n";
        return ;
        }
    }
     cout<<"It is a prime word.\n";
        return ;
}

int main()
{
    int sum;
    char s[50];
    while(cin>>s)
    {
        sum=0;
        for(int i=0;i<strlen(s);i++)
        {
        if(s[i]>='a'&&s[i]<='z')
        {
            sum+=s[i]-'a'+1;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            sum+=s[i]-'A'+27;
        }
        }
        isprime(sum);
    }
    return 0;
}
