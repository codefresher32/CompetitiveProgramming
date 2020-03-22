#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  t,a[3],x=1;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        cout<<"Case "<<x<<": ";
        if((a[0]+a[1])>a[2]&&a[0]!=0&&a[1]!=0&&a[2]!=0)
        {
            if(a[0]==a[1]&&a[1]==a[2])
            {
                cout<<"Equilateral\n";
            }
            else if(a[0]==a[1]||a[1]==a[2])
            {
                cout<<"Isosceles\n";
            }
            else
            {
                cout<<"Scalene\n";
            }
        }
        else
        {
            cout<<"Invalid\n";
        }
        x++;
    }
    return 0;
}
