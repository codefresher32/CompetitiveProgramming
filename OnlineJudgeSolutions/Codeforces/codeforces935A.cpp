#include <iostream>
using namespace std;

int main()
{
    int n,c=0,i,j;
    cin>>n;

    for(i=1,j=n-1;i<=n,j>=i;i++,j--)
    {
            if(j%i==0)
            {
                c++;
            }
    }
    cout<<c<<endl;
    return 0;

}
