#include <bits/stdc++.h>
using namespace std;
#define opt ios_base::sync_with_stdio(0)
#define lli long long int

int main(){
    opt;

    lli n;
    cin>>n;
    vector<lli> A, B;
    lli num;
    for(int i=0;i<n;i++){
        cin>>num;
        A.push_back(num);
        B.push_back(num);
    }

    sort(B.begin(),B.end());


    return 0;

}