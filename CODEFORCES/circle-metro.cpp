#include<bits/stdc++.h>
typedef long long int lli;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    int n, a, x, b, y;
    cin>>n>>a>>x>>b>>y;
    int cur1 = a;
    int cur2 = b;
    string meet = "NO";
    while(cur1!=x&&cur2!=y){
        if(cur1==n)
            cur1 = 1;
        else cur1++;
        
        if(cur2==1)
            cur2 = n;
        else cur2--;

        if(cur1==cur2){
            meet = "YES";
            break;
        }        
    }
    cout<<meet<<endl;

 return 0;
}