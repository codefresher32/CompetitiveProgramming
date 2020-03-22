#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len,i,c1=0,a=0,b=0,c=0;
    char s[5005],x[5005];
    cin>>s;
    len=strlen(s);
    strcpy(x,s);
    sort(s,s+len);
    if(strcmp(s,x)==0)
    {
        c1=1;
    }
    for(i=0;i<len&&c1==1;i++)
    {
        if(s[i]=='a')
        {
            a++;
        }
        else if(s[i]=='b')
        {
            b++;
        }
        else if(s[i]=='c')
        {
            c++;
        }
    }
    if(a!=0&&b!=0&&c!=0){
    if(len==1&&a==1)
    {
        cout<<"YES\n";
        return 0;
    }
    else if(len==2&&(a&b)==1)
    {
        cout<<"YES\n";
        return 0;
    }
    else if(a==c||b==c)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;

}
