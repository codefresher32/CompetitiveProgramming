#include<bits/stdc++.h>
using namespace std;

bool p(char a,char b)
{
    if((a=='/'||a=='*')&&(b=='-'||b=='+'))
        return true;
    else if((a=='/'||a=='*')&&(b=='/'||b=='*'))
        return true;
    if((a=='-'||a=='+')&&(b=='-'||b=='+'))
        return true;
    return false;

}

int main()
{
    char c[3];
    int l,t;
    cin>>t;
    bool f=false;
    getchar();
    getchar();
    while(t--){
         string s,o;
        stack<char>st;
    s+='(';
    while(gets(c)&&strlen(c)){
            s+=c;
    }
    s+=')';
    l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='(')
            st.push(s[i]);
        else if(s[i]>='0'&&s[i]<='9')
            o+=s[i];
        else if(s[i]==')')
        {
            while(!st.empty()&&st.top()!='(')
            {
                o+=st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(p(st.top(),s[i]))
            {
                o+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    if(f)
        cout<<endl;
    f=true;
    cout<<o<<endl;
    }
    return 0;
}
