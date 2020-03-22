#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,m;
    while(cin>>a>>b)
    {
        if((a&b)<0)
        {
            return 0;
        }
        if(a<b)
        {
            swap(a,b);
        }
        m = (a-b)>50?(b-a+100):(a-b);
        cout<<m<<endl;
    }
}
