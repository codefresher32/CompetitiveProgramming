#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double l,a;
    cin>>t;
    string s;
    getchar();
    while(t--)
    {
        getline(cin,s);
        l=s.size();
        a=sqrt(l);
        if(a-ceil(a)==0)
        {
            for(int i=0;i<(int)a;i++)
            {
                for(int j=i;j<(int)l;j+=a)
                {
                    cout<<s[j];
                }
            }
            cout<<"\n";
        }
        else
            cout<<"INVALID\n";
    }
    return 0;
}
