#include<bits/stdc++.h>
using namespace std;
void printc(char c){
    cout<<c;
}

float countP(char S[], int n){
    int c = 0;
    for(int i=0;i<n;i++){
        if(S[i]=='a')
        c++;
    }
    return c;
}


int main(){
    char S[] = "krishnubinodpradhan";
    /* for_each(tempS,tempS+5,printc); */
    cout<<*(S+5);
    cout<<endl;
    cout<<countP(S, strlen(S));
    return 0;
}