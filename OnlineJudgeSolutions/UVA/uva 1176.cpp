#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,x,n,p;
    while( cin>>n)
    {
        c=0;
        while(true)
        {
            x=log2(n)/log2(2);
            p=n;
            n=2*(n-pow(2,x))+1;
            if(p==n){
                c+=n*2;
                break;
            }
            c+=(p-n);
        }
       cout<<c<<endl;
    }
    return 0;
}
