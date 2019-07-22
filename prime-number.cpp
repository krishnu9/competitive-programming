#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
  for(int i=2;i<sqrt(n);i++){
    if(n%i==0) return 1;
  }
  return 0;
}

long sumofdigits(int n){
  long sum = 0;
  while(n>0){
    sum+=n%10;
    n=n/10;
  }
  return sum;
}
int main(){
  long a, b;
  cin>>a>>b;
  for(long i = a; i<=b; i++){
    if(isprime(i)&&isprime(sumofdigits(i)))
    cout<<i;
  }
  return 0;
}
