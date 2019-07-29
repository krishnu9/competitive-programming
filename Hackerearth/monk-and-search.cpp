#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> A;
    int N;
    int data;
    cin>>N;


    for(int i = 0; i<N; i++){
        cin>>data;
        A.push_back(data);
    }

    sort(A.begin(), A.end());

    int Q;
    cin>>Q;
    int type, x;
    for(int i = 0; i<Q; i++){
        cin>>type;
        cin>>x;
        if(type==0){
            auto it = lower_bound(A.begin(), A.end(), x);
            cout<<A.end() - it;
            cout<<'\n';
        }
        if(type==1){
            auto it = upper_bound(A.begin(), A.end(), x);
            cout<<A.end() - it;
            cout<<'\n';
        }
    }

    return 0;
}