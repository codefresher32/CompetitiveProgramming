#include <iostream>
using namespace std;

int main()

{
    int n,i,c=0;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(i==a[a[a[i]]])
       {
           cout<<"YES"<<endl;
        return 0;
       }
    }
        cout<<"NO"<<endl;
    return 0;
}
