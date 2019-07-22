#include<bits/stdc++.h>
typedef long long int lli;

//comments look like this

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    int T;
    cin>>T;
    int R, C;
    

     while(T--){

        cin>>R>>C;
        int A[R][C];
        for(int i=0;i<R;i++){

            for(int j=0;j<C;j++){
                cin>>A[i][j];
            }

        }
        bool is_stable = 1;
        for(int i=0;i<R;i++){

            for(int j=0;j<C;j++){
                if(((i==0&&j==0)||(i==0&&j==C-1)||(i==R-1&&j==0)||(i==R-1&&j==C-1))&&A[i][j]>=2)   {is_stable = 0;break;}
                else if((i==0||j==0||i==R-1||j==C-1)&&A[i][j]>=3){ is_stable = 0; break;}
                else if(A[i][j]>=4) {is_stable=0;
                break;}
            }

        }

        if(is_stable) cout<<"Stable\n";
        else cout<<"Unstable\n";
     }

     return 0;
}