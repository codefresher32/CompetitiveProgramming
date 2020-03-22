#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n)
    {
        if(n<0)
        {
            return 0;
        }
        n=(n*n+n+2)/2;
        cout<<n<<endl;
    }
}
