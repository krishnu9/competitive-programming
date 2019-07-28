#include "iostream"
using namespace std;
bool ispowerof2(int n){
  return(!(n&(n-1)));
}
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  cout<<ispowerof2(n);
  return 0;
}
