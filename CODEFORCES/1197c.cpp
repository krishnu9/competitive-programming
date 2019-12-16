#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
int n , k;
cin >> n >> k;
vector<int> a,b;
int temp;
for(int i = 0 ; i < n ; i ++){
    cin >> temp;
    a.push_back(temp);
}

for(int i=1;i<n;i++){
    temp = a[i]-a[i-1];
    b.push_back(temp);
}

sort(b.begin(),b.end(),greater<int>());

int sum = 0;
for(auto x: b){
    sum += x;
}
cout << sum;
return 0;
}