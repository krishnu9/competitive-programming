#include<bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    int q;
    cin>>q;
    while(q--){
        lli n;
        cin>>n;
        int count = 0;
        while(n>0){
            if(n%2==0){
                n=n/2;
                count++;
            }
            if(n%3==0){
                n = 2*n/3;
                count++;
            }
            if(n%5==0){
                n=4*n/5;
                count++;
            }
            if(n==1)
            break;
            if(n%2!=0&&n%3!=0&&n%5!=0&&n!=1)
            break;
        }
        if(n==1){
            cout<<count<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}