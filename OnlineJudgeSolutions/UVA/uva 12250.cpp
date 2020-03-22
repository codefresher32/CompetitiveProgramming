#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[50];
    int i=1;
    while(gets(s))
    {
        if(s[0]=='#')
        {
            return 0;
        }
        cout<<"Case "<<i<<":";
        if(strcmp(s,"HELLO")==0)
        {
            cout<<" ENGLISH\n";
        }
        else if(strcmp(s,"HOLA")==0)
        {
            cout<<" SPANISH\n";
        }
        else if(strcmp(s,"HALLO")==0)
        {
            cout<<" GERMAN\n";
        }
        else if(strcmp(s,"BONJOUR")==0)
        {
            cout<<" FRENCH\n";
        }
        else if(strcmp(s,"CIAO")==0)
        {
            cout<<" ITALIAN\n";
        }
        else if(strcmp(s,"ZDRAVSTVUJTE")==0)
        {
            cout<<" RUSSIAN\n";
        }
        else
        {
            cout<<" UNKNOWN\n";
        }
        i++;
    }
}
