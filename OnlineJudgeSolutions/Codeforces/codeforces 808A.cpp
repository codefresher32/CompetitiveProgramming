#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,r=0,x,t=0;
    cin>>n;
    n=x;
    while(x!=0)
    {
        r=x%10;
        x/=10;
        c++;
    }
    c--;
    t=(r+1)*pow(10,c);
    cout<<t-n<<endl;
    return 0;
}
