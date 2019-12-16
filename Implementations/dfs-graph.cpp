#include <iostream>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int **graph = new int[n];
    for (int i = 0; i < n;i++){
        graph[i] = new int[n];
        for (int j = 0; j < n;j++){
            graph[i][j] = 0;
        }
    }

    

}