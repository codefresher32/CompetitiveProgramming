#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    char s;
    long long int x,y;
    cin>>n>>x;
    while(n--)
    {
        cin>>s>>y;
        if(s=='+')
            x+=y;
        else
            {
                if(x-y>=0)
                    x-=y;
                else
                    c++;
            }
    }
    cout<<x<<" "<<c<<endl;
    return 0;
}
