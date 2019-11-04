#include<bits/stdc++.h>
using namespace std;
#define ulli unsigned long long int


int llog2(ulli n) {
    int i = 0;
    
    ulli temp = 1;

    while (true)
    {
    if(temp > n)
    return i-1;
    else
    {
        temp = temp * 2;
        i++;
    }
    }
    
}

int main() {
    ulli n;
    cin >> n;
    cout << llog2(n);
}