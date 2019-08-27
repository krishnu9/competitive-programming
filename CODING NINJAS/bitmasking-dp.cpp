#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
// Find mincost for jobs to 4 persons

int mincost(int cost[4][4] )

int main() {
    ios_base::sync_with_stdio(0);
    
    int cost[4][4] = {{10,2,6,5},{1,15,12,8},{7,8,9,3},{15,13,4,10}};

    cout << mincost(cost,4,0,0)<<endl;
    
    return 0;
}