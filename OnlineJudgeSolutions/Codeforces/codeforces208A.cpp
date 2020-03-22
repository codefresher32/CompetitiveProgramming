#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[201],x[3]={'W','U','B'},y[200];
    int i=0,j,c=0,len;
    cin>>s;
    len=strlen(s);
        for(j=0;j<len;j++)
          {
                if(x[0]==s[j]&&x[1]==s[j+1]&&x[2]==s[j+2])
                {
                            j+=2;
                            if(c>0)
                            {
                                cout<<" ";
                            }
                            continue;
                }
                else
                {
                    cout<<s[j];
                    c++;
                }
          }
          cout<<endl;
          return 0;
}

