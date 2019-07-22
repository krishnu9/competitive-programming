#include<bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

lli sum_of_digits(lli N){
    lli sum = 0;
    while(N>0){
        sum+=N%10;
        N=N/10;
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(0);

    int T;
    cin>>T;
    lli sum, x;
    while(T--){
        lli N;
        ulli c;
        
        cin>>N;
        sum = sum_of_digits(N);
        if(sum%10!=0)
        {x = 10 - (sum%10);}
        else{
            x = 0;
        }
        c = N*10 + x;
        cout<<c<<endl;
    }

    return 0;
}