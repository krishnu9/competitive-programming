#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  int p;
  vector<int> P,P1;
  cin>>n;
    for(int i=0;i<n;i++){
      cin>>p;
      P.push_back(p);
    }
    for(int i=0;i<P.size();i++){
      P1.push_back(P[P[i]]);
    }

    for(auto x: P1)
      cout<<x<<'\t';

  cout<<endl;
  return 0;
}
