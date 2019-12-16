#include<bits/stdc++.h>
using namespace std;
#define lli long long int;

int main(){
    ios_base::sync_with_stdio(0);

    int n , k;
    cin>>n>>k;
    int grades[n];
    int grades2[n];
    int grades3[n-k];
    for(int i=0;i<n;i++){
        cin>>grades[i];
        grades2[i]=grades[i];
    }
    sort(grades,grades+n);

    for(int i = 0; i<k;i++){
        for(int j=0;j<n;j++){
            if(grades[i]==grades2[j])
                grades2[j]=0;
        }
    }

    for(int i=0,j=0;i<n;i++){
        if(grades2[i]!=0)
        grades3[j++]=grades2[i];
    }

    cout<<grades3[((n-k)+1)/2]<<endl;


    return 0;
}