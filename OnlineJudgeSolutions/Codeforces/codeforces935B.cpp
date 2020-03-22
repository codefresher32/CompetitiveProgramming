#include <iostream>
using namespace std;

int main()
{
    int n,i,c=0,x=0,y=0;
    cin>>n;
    char s[n];
    cin>>s;

    for(i=0;i<n;i++)
    {
       if(s[i]=='R')
       {
           x++;
       }
       else if(s[i]=='U')
       {
           y++;
       }
        if(x==y&&s[i]==s[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}

