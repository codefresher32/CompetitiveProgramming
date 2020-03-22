#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,y;
    string s[101],ss;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>ss;
            if(ss=="LEFT")
            {
                s[i]=ss;
                x--;
            }
            else if(ss=="RIGHT")
            {
                s[i]=ss;
                x++;
            }
            else
            {
                cin>>ss;
                cin>>y;
                if(s[y]=="LEFT")
                {
                    s[i]=s[y];
                    x--;
                }
                else if(s[y]=="RIGHT")
                {
                    s[i]=s[y];
                    x++;
                }
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
