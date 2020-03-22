#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,k,v[10];
    cin>>n;
    cout<<"Lumberjacks:\n";
    while(n--)
    {
        c=0;
        k=0;
        for(int i=0;i<10;i++)
        {
            cin>>v[i];

        }
        for(int i=0;i<9;i++)
        {
            if(v[i]<v[i+1])
            {
                c++;
            }
            else if(v[i]>v[i+1])
            {
                k++;
            }
        }
        if(c==9)
        {
            cout<<"Ordered\n";
        }
        else if(k==9)
        {
            cout<<"Ordered\n";
        }
        else
            {
               cout<<"Unordered\n";
            }
    }
    return 0;
}
