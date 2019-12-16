//By: Krishnu Pradhan
#include<bits/stdc++.h>
typedef long long int lli;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    int T, n, cost_green, cost_purple;
    int p1, p2;
    cin>>T;
    
    while(T--){
        cin>>cost_green>>cost_purple;
        cin>>n;

        int c1=0, c2=0;

        for(int i=0;i<n;i++){
            cin>>p1>>p2;
            if(p1)
                c1++;
            if(p2) 
                c2++;
    }

    cout<<(min(c1,c2)*max(cost_green,cost_purple))+(max(c1,c2)*min(cost_green,cost_purple))<<endl;

    }


    return 0;
}