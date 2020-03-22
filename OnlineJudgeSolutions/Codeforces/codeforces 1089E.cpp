#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int f[10][10];

void p(int i,int j)
{
    printf("%c%d ",'a'+i-1,j);
    return ;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cnt,x=1,y=1,tr,a,z=2;
    char ch='a';
    cin>>n;
    p(x,y);
    f[x][y]=1;
    while(true){
        if(x!=8){
            for(int i=8;i>0;i--){
                if(!f[x][i]){
                    if(n==z){
                        goto ax;
                    }
                f[x][i]=1;
                if(n==3&&x==7&&i==8){
                    y+=1;
                    p(x,y);
                    goto ax;
                }
                y=i;
                n--;
                p(x,i);
                }
            }
        }
        else{
            for(int i=1;i<9;i++){
                if(!f[x][i]){
                    if(n==z){
                        goto ax;
                    }
                f[x][i]=1;
                n--;
                y=i;
                p(x,i);
                }
            }
        }
        if(n==z){
            goto ax;
        }
        x+=1;
        p(x,y);
        f[x][y]=1;
        n--;
        z=x==8?1:2;
    }
    ax:if(y==8){
        if(z==2){
            p(7,y);
            p(8,y);
        }
        else{
            p(8,y);
        }
    }
    else{
        if(z==2){
            p(8,y);
            p(8,8);
        }
        else{
            p(8,8);
        }
    }
    return 0;
}

