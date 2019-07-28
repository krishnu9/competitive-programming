//Author: Sage

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
    long k;

    cin>>k;
    int c;
    while(k--){
        cin>>s;
        c=0;
        for(int i = 0; s[i]; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
