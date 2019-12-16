#include<bits/stdc++.h>
#define lli long long int


using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, i;
        cin>>n;
        string str;
        cin>>str;

        if(n<11)
            cout<<"NO\n";
        else
        {
            for(int i=0;i<=n-11; i++){
            if(str[i]=='8'){
                cout<<"YES\n";
                break;
            }
            if(i>=n-11) cout<<"NO\n";
        }
        }

    }
    return 0;
}