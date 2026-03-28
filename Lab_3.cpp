#include <iostream>
using namespace std;

int main(){

    int graph[4][4] = {
        {0,1,1,0},
        {1,0,1,1},
        {1,1,0,1},
        {0,1,1,0}
    };

    int color[4]={0};
    int c=1;

    for(int i=0;i<4;i++){
        if(color[i]==0){
            color[i]=c;
            for(int j=i+1;j<4;j++){
                if(graph[i][j]==0 && color[j]==0)
                    color[j]=c;
            }
            c++;
        }
    }

    cout<<"Vertex Colors:\n";

    for(int i=0;i<4;i++)
        cout<<"Vertex "<<i+1<<" -> Color "<<color[i]<<endl;

    return 0;
}
