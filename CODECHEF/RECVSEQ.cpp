//AUTHOR: Krishnu Pradhan   (@krisp)

#include<bits/stdc++.h>
typedef long long int lli;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    
    lli T;
    cin>>T;
    lli N;
    
    while(T--){
        cin>>N;
        lli a[N];

        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        for(int i=1;i<N-1;i++){
            /* if(a[i]!=(a[i-1]+a[i+1])/2) */
        }
        for(int i=0;i<N;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}