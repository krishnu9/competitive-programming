#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;

bool f(char c){
    if(c=='P')
    return true;
    else 
    return false;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        double D,present,proxy=0;
        cin>>D;
        string S;
        cin>>S;
        present = count_if(S.begin(),S.end(),f);

        for(int i=0;i<D&&(present+proxy)/D<0.75;i++){
            if((S[i]=='A')&&((S[i-1]=='P')||(S[i-2]=='P')&&(S[i+1]=='P')||(S[i+2]=='P'))){
                proxy = proxy + 1;
            }
        }
        if((present+proxy)/D>=0.75)
            cout<<proxy<<endl;
        else
        {
            cout<<-1<<endl;
        }
        
    }
}