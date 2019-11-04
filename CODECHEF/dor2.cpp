#include <iostream>
#include<cstring>
#include<vector>
#include <limits>
#include<algorithm>
#include<cmath>
#include <bits/stdc++.h> 

using namespace std;

typedef long long ll;

ll count_digits(ll n)
{
    ll cnt=0;
    while(n>0)
    {
        n = n/2;
        cnt++;
    }
    
    return cnt;
}

ll power(ll x, ll y) 
{ 
    ll temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
} 

vector<ll> bin(ll n) 
{ 
    ll temp = n;
    vector<ll> v;
    
    while(temp>0)
    {
        ll rem  = temp%2;
        v.push_back(rem);
        temp = temp/2;
    }
    reverse(v.begin(),v.end());
    return v;
} 
  

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        
        ll cnt_a = count_digits(l);
        ll cnt_b = count_digits(r);
        //cout<<cnt_a<<" "<<cnt_b<<"\n";
        
        if (cnt_b>cnt_a){
            ll ans = power(2, cnt_b) - 1;
            cout<<ans<<"\n";
            continue;
        }
        
        vector<ll> v1,v2;
        ll ans=0;
        v1 = bin(l);
        v2 = bin(r);
        
        for (ll i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
        cout<<"\n";
        for (ll i=0;i<v2.size();i++)
            cout<<v2[i]<<" ";
        cout<<"\n";
        for (ll i=0;i<v1.size();i++)
        {
            if (v1[i]==v2[i])
            {
                ans = ans + v1[i]*power(2, cnt_b - i - 1);
                continue;
            }
            
            else{
                ans = ans + 1*power(2, cnt_b - i) - 1;
                break;
            }
        }
        
        cout<<ans<<"\n";
        
    }
    
    return 0;
}


