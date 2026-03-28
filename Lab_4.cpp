// Warshall Algorithm

#include <iostream>
using namespace std;

int main(){

    int n=4;

    int graph[4][4] = {
        {0,5,999,10},
        {999,0,3,999},
        {999,999,0,1},
        {999,999,999,0}
    };

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(graph[i][k]+graph[k][j] < graph[i][j])
                    graph[i][j]=graph[i][k]+graph[k][j];
            }
        }
    }

    cout<<"Shortest Path Matrix:\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<graph[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
