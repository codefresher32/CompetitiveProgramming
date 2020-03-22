#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m,x,a;
    while(cin>>m>>x)
    {
        if(m==0&&x==0)
            return 0;
        if(x==100)
        {
            cout<<"Not found\n";
            continue;
        }
        a=(m-1)*100/(100-x);
        if((m-1)*100%(100-x)==0)
            a--;
        if(a<m)
            cout<<"Not found\n";
        else
            cout<<a<<endl;
    }
    return 0;
}
