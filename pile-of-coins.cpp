#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  long p, q;
  int turns;
  while(t>0){
    cin>>p>>q;
    if(p=q) turns = log2(p);
    if(p>q) turns = log2(p);
    if(q>p) turns = log2(q);

    if(turns!2==0) cout<<"Jeel";
    else cout<<"Ashish";
    t--;
  }
  return 0;
}
