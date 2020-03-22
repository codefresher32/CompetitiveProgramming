#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l;
    string ss;
    cin>>t;
    getchar();
    while(t--)
    {
        stack<char>s;
        getline(cin,ss);
        l=ss.size();
        if(ss.compare("\n")==0)
        {
            cout<<"Yes\n";
            continue;
        }
        for(int i=0;i<l;i++)
        {
            if(ss[i]=='('||ss[i]=='[')
                {
                    s.push(ss[i]);
                }
            else
            {
                if(ss[i]==')')
                {
                    if(s.empty()||s.top()!='('){
                    s.push('a');
                    break;
                    }
                    s.pop();
                }
                else if(ss[i]==']')
                {
                    if(s.empty()||s.top()!='['){
                     s.push('a');
                     break;
                    }
                    s.pop();
                }
            }
        }
        if(s.empty())
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}
