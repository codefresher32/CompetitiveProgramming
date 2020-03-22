#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,a,b;
    int l;
    while(getline(cin,s))
    {
        a=b="";
        if(s=="DONE")
            return 0;
        l=s.size();
        for(int i=0;i<l;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                a+=s[i];
            else if(s[i]>='a'&&s[i]<='z')
                a+=s[i]-32;
        }
        b=a;
        reverse(b.begin(),b.end());
        if(a==b)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
}
