#include<bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int n4=0, n8=0, n15=0, n16=0, n23=0, n42=0;
    for(int i=0;i<n;i++){
        if(a[i]==4) {n4++;}
        if(a[i]==8) {n8++;}
        if(a[i]==15) {n15++;}
        if(a[i]==16){n16++;}
        if(a[i]==23) {n23++;}
        if(a[i]==42) {n42++;}
    }
    int minrem;
    n4 = (n4%6);
    n8 = (n8%6);
    n15 = (n15%6);
    n16 = (n16%6);
    n23 = (n23%6);
    n42 = (n42%6); 
    while(n4*n8*n15*n16*n23*n42){
        n4--;
    n8--;
    n15--;
    n16--;
    n23--;
    n42--;
    }
    cout<<n4+n8+n15+n16+n23+n42;
    return 0;
}