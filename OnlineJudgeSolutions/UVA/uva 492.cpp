#include<bits/stdc++.h>
using namespace std;

bool check(char s)
{
   if(s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
    return true;
   else if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
    return true;
   return false;
}

bool letter(char c)
{
    if(c>=65&&c<=90||c>=97&&c<=122)
        return true;
    else
        return false;
}

int main()
{
    string s,x;
    int t,i,j,l;
    while(getline(cin,s))
    {
        l=s.size();
        int fa=-1,la=-1,ck=1;
        for(i=0;i<l;i++)
        {
            if((s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')&&ck==1)
            {
                fa=i;
                ck=0;
            }
            if((s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'))
            {
                la=i;
            }
            if((!letter(s[i])||i==s.size()-1)&&fa!=-1&&la!=-1)
            {
                if(check(s[fa]))
                {
                    s.insert(la+1,"ay");
                    i+=2;
                    l+=2;
                }
                else if(!check(s[fa]))
                {
                    x=s[fa];
                    x+="ay";
                    s.insert(la+1,x);
                    s.erase(s.begin()+fa);
                    i+=2;
                    l+=2;
                }
                ck=1;
                fa=la=-1;
            }
        }
        cout<<s<<endl;
    }
}
