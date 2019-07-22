#include <bits/stdc++.h>
using namespace std;
 int main(){
long long n;
long long m;
long long a;
cin>>n>>m>>a;
long long nrows = n/a;
if(n%a) nrows++;
long long ncols = m/a;
if(m%a) ncols++;
cout<<nrows*ncols;
 }
