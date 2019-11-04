#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007
int main()
{
int t;
cin>>t;
while(t--)
{
lli n,f=0,t=0;
cin>>n;
while(n>0)
{
if(n%2==0)
{
n/=2;
t++;
}
else
break;
}
while(n>0)
{
if(n%5==0)
{
n/=5;
f++;
}
else
break;
}
if((t-f)>=0&&(2*+f-t)>=0&&n==1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
}