#include<bits/stdc++.h>
#define lli long long int


using namespace std;

bool isVowel(char x) 
{ 
    if (x == 'a' || x == 'e' || x == 'i' ||  
        x == 'o' || x == 'u' || x == 'A' ||  
        x == 'E' || x == 'I' || x == 'O' || x == 'U') 
        return true;
    return false;
} 

int main(){

    ios_base::sync_with_stdio(0);

    int T;
    cin>>T;
    int N;
    string S;
    while(T--){
        int c=0;
        cin>>N;
        cin>>S;
        for(int i=0;i<N-1;i++){
            if(!isVowel(S[i])&&isVowel(S[i+1])){c++;}
        }
        cout<<c<<endl;
    }
    return 0;
}