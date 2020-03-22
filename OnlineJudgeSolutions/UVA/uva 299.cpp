#include<bits/stdc++.h>
using namespace std;

static int A[64], c;

int main(){
    int n, i, j, m;
    cin>>n;

    while(n--){
        cin>>m;
        for(i = c = 0; i < m; i++)
            cin>>A[i];

        for(i = 0; i < m - 1; i++){
            for(j = i + 1; j < m; j++){
                if(A[i] > A[j])
                    ++c;
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", c);
    }
    return 0;
}
