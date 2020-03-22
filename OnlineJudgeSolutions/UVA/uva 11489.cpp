#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int f[11]={0};
        int sum=0,cnt=0;
        for(int i=0;i<s.size();i++)
        {
            sum+=s[i]-'0';
            f[s[i]-'0']++;
        }
        cnt=f[3]+f[6]+f[9];
        printf("Case %d: ",++p);
        bool sw=true;
        if(sum%3==0)
        {
            if(cnt%2==0)
                sw=false;
        }
        else if(sum%3==1)
        {
            if(f[1]||f[4]||f[7]){
                if(cnt%2)
                    sw=false;
            }
            else
                sw=false;
        }
        else
        {
            if(f[2]||f[5]||f[8]){
                if(cnt%2)
                    sw=false;
            }
            else
                sw=false;
        }
        if(sw)
            cout<<"S\n";
        else
            cout<<"T\n";
    }
    return 0;
}
