#include<bits/stdc++.h>
#define lli long long int


using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    lli T, x, y, a, b;
    cin>>T;
    while(T--){
        cin>>x>>y>>a>>b;
        if(x*y==(a+b))
        cout<<"Yes\n";
        else cout<<"No\n";
        }

    
    return 0;
}