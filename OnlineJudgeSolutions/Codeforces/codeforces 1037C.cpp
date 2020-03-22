#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    string a,b;
    cin>>n;
    cin>>a>>b;
     int c=0;
    for(int i=1;i<n;i++)
    {
        if(b[i-1]!=b[i])
            if(a[i-1]!=a[i])
                if(a[i-1]!=b[i-1]&&a[i]!=b[i])
                    swap(a[i],a[i-1]),c++;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            c++;
    }
    cout<<c<<endl;
}
