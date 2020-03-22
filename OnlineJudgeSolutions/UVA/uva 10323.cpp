#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,s;
    while(cin>>n)
    {
        s=1;
        if(n<0)
        {
            if(n%2==0)
                cout<<"Underflow!\n";
            else
                cout<<"Overflow!\n";
            continue;
        }
        while(n>0)
        {
            s*=n;
            n--;
            if(s>6227020800)
                break;
        }
        if(s<10000)
            cout<<"Underflow!\n";
        else if(s>6227020800)
            cout<<"Overflow!\n";
        else
            cout<<s<<endl;
    }
}
