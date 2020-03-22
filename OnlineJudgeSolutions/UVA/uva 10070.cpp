#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    while(cin>>n)
    {
        if((n%4==0&&n%100!=0)||n%400==0)
        {
            if(n%15==0)
            {
                cout<<"This is leap year.\nThis is huluculu festival year.\n";
            }
            else if(n%55==0)
            {
                cout<<"This is leap year.\nThis is bulukulu festival year.\n";
            }
            else
            {
                cout<<"This is leap year.\n";
            }
        }
        else
        {
            if(n%15==0)
            {
                cout<<"This is huluculu festival year.\n";
            }
            else if(n%55==0)
            {
                cout<<"This is bulukulu festival year.\n";
            }
            else
            {
                cout<<"This is an ordinary year.\n";
            }
        }
    }
}
