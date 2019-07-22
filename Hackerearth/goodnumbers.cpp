#include<bits/stdc++.h>
#define lli long long int


using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    lli T, N;
    cin>>T;
    while(T--){
        cin>>N;
        lli c = 0;
        for(lli i = 1; i<=N; i++){
            if((i%2==0)&&(i%4!=0))
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}