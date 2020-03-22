#include<bits/stdc++.h>
using namespace std;

int a[1000005];

int main()
{
    int n=0;
    for(int i=1;i<1000000;i++)
    {
        if(!a[i])
            cout<<i<<endl;
        n=i+(i%10)+(i/10)%10+(i/100)%10+(i/1000)%10+(i/10000)%10+(i/100000)%10;
        a[n]=1;
    }
    cout<<1000000<<endl;
    return 0;
}
