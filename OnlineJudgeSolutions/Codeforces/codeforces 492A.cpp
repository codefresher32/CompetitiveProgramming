#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0,sum=0,i;
    cin>>n;
    for(i=1; ;i++)
    {
        sum+=i;
        k+=sum;
        if(k==n)
            break;
        if(k>n){
            i--;
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}
