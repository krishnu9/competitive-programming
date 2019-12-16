#include<bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        lli a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        lli sum=0;
        for(int i=0;i<n;i++){
            if(a[i]<3||a[i]%3==0)
            sum+=a[i];
        }
        cout<<sum/3<<endl;
    }

    return 0;
}
