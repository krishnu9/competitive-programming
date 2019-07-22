#include<bits/stdc++.h>
using namespace std;

void findSubarray(int A[],int N, int sum){
    int start = 0, cursum=A[0];
    int flag = 0;
    for(int i=1;i<N;i++)
    {
        while(cursum>sum && start<i-1){
            cursum-=A[start];
            start++;
        }
         if(cursum<sum){
            cursum+=A[i];
        }
        else{
            cout<<"true"<<endl;
            for(int j=start;j<i;j++){
                cout<<A[j]<<' ';
            }
            flag = 1;
            break;
        }
               
    }
    if(flag==0)
    cout<<'false';
}

int main() {

    int N, target;
    cin>>N>>target;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    
    findSubarray(A,N,target);
    
	// Write your code here
    return 0;
}