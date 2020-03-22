#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp,dp;
    mp["JAN"]=31;
    mp["FEB"]=28;
    mp["MAR"]=31;
    mp["APR"]=30;
    mp["MAY"]=31;
    mp["JUN"]=30;
    mp["JUL"]=31;
    mp["AUG"]=31;
    mp["SEP"]=30;
    mp["OCT"]=31;
    mp["NOV"]=30;
    mp["DEC"]=31;
    dp["SUN"]=1;
    dp["MON"]=2;
    dp["TUE"]=3;
    dp["WED"]=4;
    dp["THU"]=5;
    dp["FRI"]=6;
    dp["SAT"]=7;
    int t,d,m;
    string s1,s2;
    cin>>t;
    while(t--)
    {
       cin>>s1>>s2;
        m=mp[s1];
        d=dp[s2];
        int cnt=0;
        for(int i=6-d+1;i<=m;i+=7)
        {
            if(i>0)
                cnt++;
        }
        for(int i=7-d+1;i<=m;i+=7)
        {
            if(i>0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
