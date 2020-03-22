#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101],m[101],t[101],x[101];
    int n,c=1,y=-1;
    cin>>n;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        c=1;
        m[0]=s[i];
        m[1]=s[i+1];
        m[2]='\0';
        for(int j=i+1;j<n-1;j++)
        {
            t[0]=s[j];
            t[1]=s[j+1];
            t[2]='\0';
            if(strcmp(t,m)==0)
            {
                c++;
            }
        }
        if(c>y)
            {
                y=c;
                strcpy(x,m);
                x[2]='\0';
            }

    }
    cout<<x<<endl;
    return 0;
}
