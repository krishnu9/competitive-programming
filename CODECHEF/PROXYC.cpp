#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int T;
    double D;
    cin>>T;
    while(T--){
        cin>>D;
        char S[int(D)];

        double npresent = 0;
        for(int i=0;i<D;i++){
            cin>>S[i];
            if(S[i]=='P') npresent+=1;
        }
        
        double npresent1 = npresent;
        if(npresent1/D>=0.75){
            cout<<0<<endl;
            continue;
        }
        else
        {
            for(int i = 2; S[i+2]!='\0'; i++){
            if(S[i]=='A'){
                if((S[i-1]=='P'||S[i-2]=='P') && (S[i+1]=='P'||S[i+2]=='P'))
                npresent1+=1;
            }
            if(npresent1/D>=0.75){
                break;
            }
        }
        }
        
            if(npresent1/D>=0.75)
            {cout<<npresent1-npresent<<endl;}
            else
            cout<< -1<<endl;

    }
    return 0;
}