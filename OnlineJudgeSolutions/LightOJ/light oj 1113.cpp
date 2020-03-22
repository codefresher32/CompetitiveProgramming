#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x=0;
    cin>>t;
    while(t--)
    {
        string s1="",s="http://www.lightoj.com/";
        printf("Case %d:\n",++x);
        stack<string>f;
        stack<string>b;
        b.push(s);
        while(1)
        {
            cin>>s1;
            if(s1=="QUIT")
            {
                break;
            }
            else if(s1=="VISIT")
            {
                cin>>s;
                cout<<s<<endl;
                b.push(s);
                if(!f.empty()){
                while(!f.empty())
                    f.pop();
                }
            }
            else if(s1=="BACK")
            {
                f.push(b.top());
                b.pop();
                if(!b.empty())
                    cout<<b.top()<<endl;
                else{
                    cout<<"Ignored\n";
                b.push(f.top());
                f.pop();
                }
            }
            else if(s1=="FORWARD")
            {
                if(!f.empty())
                {
                    cout<<f.top()<<endl;
                b.push(f.top());
                f.pop();
                }
                else
                    cout<<"Ignored\n";
            }
        }
    }
}
