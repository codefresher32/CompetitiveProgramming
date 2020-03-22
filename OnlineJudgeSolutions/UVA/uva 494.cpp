#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c;
    while(getline(cin,s))
    {
        c=0;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<s.length();i++)
        {
            if(s[i-1]>='a'&&s[i-1]<='z')
               if(!(s[i]>='a'&&s[i]<='z'))
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
