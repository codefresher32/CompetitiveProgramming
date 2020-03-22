#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,a,b;
    cin>>s;
    a=s%10;
    b=s/10;
    if(b==0)
    {
        if(a==0)
            cout<<"zero\n";
        else if(a==1)
            cout<<"one\n";
        else if(a==2)
            cout<<"two\n";
        else if(a==3)
            cout<<"three\n";
        else if(a==4)
            cout<<"four\n";
        else if(a==5)
            cout<<"five\n";
        else if(a==6)
            cout<<"six\n";
        else if(a==7)
            cout<<"seven\n";
        else if(a==8)
            cout<<"eight\n";
        else if(a==9)
            cout<<"nine\n";
    }
    else if(b==1)
    {
        if(a==0)
            cout<<"ten\n";
        else if(a==1)
            cout<<"eleven\n";
        else if(a==2)
            cout<<"twelve\n";
        else if(a==3)
            cout<<"thirteen\n";
        else if(a==4)
            cout<<"fourteen\n";
        else if(a==5)
            cout<<"fifteen\n";
        else if(a==6)
            cout<<"sixteen\n";
        else if(a==7)
            cout<<"seventeen\n";
        else if(a==8)
            cout<<"eighteen\n";
        else if(a==9)
            cout<<"nineteen\n";
    }
    else if(b>=2)
    {
        if(b==2)
            cout<<"twenty";
        else if(b==3)
            cout<<"thirty";
        else if(b==4)
            cout<<"forty";
        else if(b==5)
            cout<<"fifty";
        else if(b==6)
            cout<<"sixty";
        else if(b==7)
            cout<<"seventy";
        else if(b==8)
            cout<<"eighty";
        else if(b==9)
            cout<<"ninety";


        if(a==1)
            cout<<"-one\n";
        else if(a==2)
            cout<<"-two\n";
        else if(a==3)
            cout<<"-three\n";
        else if(a==4)
            cout<<"-four\n";
        else if(a==5)
            cout<<"-five\n";
        else if(a==6)
            cout<<"-six\n";
        else if(a==7)
            cout<<"-seven\n";
        else if(a==8)
            cout<<"-eight\n";
        else if(a==9)
            cout<<"-nine\n";

    }
    return 0;
}
