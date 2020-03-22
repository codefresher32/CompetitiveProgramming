#include<bits/stdc++.h>
using namespace std;

char s[101][101];
int n;

void floodfill(int i, int j)
{
    if(i<0||j<0||i>=n||j>=n||s[i][j]!='1')
        return ;
    s[i][j]='0';
    floodfill(i-1,j);
    floodfill(i-1,j+1);
    floodfill(i-1,j-1);
    floodfill(i,j+1);
    floodfill(i,j-1);
    floodfill(i+1,j);
    floodfill(i+1,j+1);
    floodfill(i+1,j-1);
}

int main()
{
    int p=0;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            cin>>s[i];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i][j]=='1')
                {
                    floodfill(i,j);
                    cnt++;
                }
            }
        }
       printf("Image number %d contains %d war eagles.\n",++p,cnt);
       for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<s[i][j]<<" ";
            }
            cout<<endl;
       }
    }
}
