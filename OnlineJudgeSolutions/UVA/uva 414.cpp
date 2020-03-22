#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        cin.ignore();
        int a[15]={0},mn=100,c;
        string ss;
        for(int i=0;i<n;i++)
        {
            getline(cin,ss);
            c=0;
            for(int j=0;j<25;j++)
            {
                if(ss[j]==' ')
                    c++;
            }
            a[i]=c;
            mn=min(mn,c);
        }
        c=0;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            c+=a[i]-mn;
        }
        cout<<c<<endl;
    }
}
