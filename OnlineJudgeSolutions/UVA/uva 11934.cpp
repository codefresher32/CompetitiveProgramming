#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,l,x;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            return 0;
            int c=0;
        for(int i=0;i<=l;i++)
        {
            x=(a*i*i)+(b*i)+c;
            if(x%d==0)
                c++;
        }
        cout<<c<<endl;
    }
}
