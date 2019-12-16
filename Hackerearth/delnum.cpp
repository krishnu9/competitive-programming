#include<bits/stdc++.h>
using namespace std;
#define lli long long int;

int main(){
    ios_base::sync_with_stdio(0);

    int n , k;
    cin>>n>>k;
    vector<int> g;
    vector<int> g2;
    vector<int> g3;
    int gval;

    for(int i=0;i<n;i++){
        cin>>gval;
        g.push_back(gval);
        g2.push_back(gval);
    }

    sort(g.begin(),g.end());

    g.erase(g.begin(),g.begin()+k);

    for(int i=0;i<n;i++){
        for(int j=0;j<n-k;j++){
            if(g2[i]==g[j]){
                g3.push_back(g2[i]);
            }
        }
    }

    cout<<g3[(n-k+1)/2]<<endl;

    return 0;
}