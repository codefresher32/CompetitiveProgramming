#include<bits/stdc++.h>
using namespace std;

void htod(string s)
{
    int h=stoi(s);
    int x,c=0,y=0;
    while(h!=0)
    {
        x=h%10;
        y+=x*pow(16,c);
        c++;
    }
    cout<<y<<endl;
    return ;
}

void dtoh(string s)
{
    int h=stoi(s);
    string v="";
    while(h!=0)
    {
        if(h%16==10)
            v='A';
        else if(h%16==11)
            v='B';
        else if(h%16==12)
            v='C';
        else if(h%16==13)
            v='D';
        else if(h%16==14)
            v='E';
        else if(h%16==15)
            v='F';
        else
            v=h%16;
        h/=16;
    }
    reverse(v.begin(),v.end());
    cout<<"0x"<<v<<endl;
    return ;
}

int main()
{
    string s;
    while(cin>>s)
    {
        if(stoi(s)<0)
            return 0;
        if(s[1]=='x')
            htod(s);
        dtoh(s);
    }
}
