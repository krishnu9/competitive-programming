//Author: Sage

#include <bits/stdc++.h>

using namespace std;

long double distance(int x, int y){
    long double dist = (x*x + y*y);
    return dist;
}

int main()
{
    vector<int> X;
    vector<int> Y;
    int N;
    cin>>N;
    int x, y;
    for (int i = 0; i < N; i++)
    {
        cin>>x;
        X.push_back(x);
        cin>>y;
        Y.push_back(y);
    }

    int q;
    cin>>q;
    int r;
    int count;
    for (int i = 0; i < q; i++){
        cin>>r;
        count = 0;
        for(int j = 0 ; j < X.size(); j++){
            if(distance(X[j],Y[j])<r){
                count++;
            }
            
        }
        cout << count << '\n';
    }
}