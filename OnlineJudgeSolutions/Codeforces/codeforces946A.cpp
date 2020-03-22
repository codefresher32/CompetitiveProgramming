#include<iostream>
using namespace std;
int main()

{
    int n,sum=0,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a<0)
        {
            a=a*-1;
        }
        sum+=a;
    }
    cout<<sum<<endl;
    return 0;
}
