//By: Krishnu Pradhan
#include<bits/stdc++.h>
typedef long long int lli;
#define inf 100000000

using namespace std;
lli c1=inf, c2=inf, c3=inf;
lli find_cost(lli a[], lli pos, lli cost, lli n){
    if(pos==n)
        return cost;
    if(pos+1<=n)
        c1 = find_cost(a,pos+1,cost+1,n);
    if(pos-1>=1)
        c2 = find_cost(a,pos-1,cost+1,n);
    if(a[pos]!=pos)
        c3 = find_cost(a, a[pos], cost, n);
    return min(c1, min(c2, c3));
}

int main() {
    ios_base::sync_with_stdio(0);


    lli T, n;
    cin>>T;
    while(T--){
        cin>>n;
        lli a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<find_cost(a, 1, 0, n);
    }
    return 0;
}