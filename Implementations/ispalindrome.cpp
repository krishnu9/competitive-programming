#include <bits/stdc++.h>
using namespace std;

int isplaindrome(string S){
  int size = S.size();
  for(int i = 0 ; i<size/2; i++){
    if(S[i]!=S[size-i-1])
    return 0;
  }
  return 1;
}

int main(){
  string S;
  cin>>S;
  cout<<isplaindrome(S)<<endl;

  return 0;
}
