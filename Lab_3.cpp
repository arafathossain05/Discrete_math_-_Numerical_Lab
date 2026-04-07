#include <iostream>
#include <algorithm>
using namespace std;

struct Vertex {
    int index;
    int degree;
};

// sort in descending order of degree
bool cmp(Vertex a, Vertex b){
    return a.degree > b.degree;
}

int main(){

    int graph[4][4] = {
        {0,1,1,0},
        {1,0,1,1},
        {1,1,0,1},
        {0,1,1,0}
    };

    Vertex v[4];

    // calculate degree
    for(int i=0;i<4;i++){
        v[i].index = i;
        v[i].degree = 0;
        for(int j=0;j<4;j++){
            if(graph[i][j]==1)
                v[i].degree++;
        }
    }

    // sort vertices by degree
    sort(v, v+4, cmp);

    int color[4]={0};
    int c = 1;

    // Welch-Powell
    for(int i=0;i<4;i++){
        if(color[v[i].index]==0){

            color[v[i].index] = c;

            for(int j=i+1;j<4;j++){
                int u = v[j].index;

                if(color[u]==0){
                    bool canColor = true;

                    for(int k=0;k<4;k++){
                        if(graph[u][k]==1 && color[k]==c){
                            canColor = false;
                            break;
                        }
                    }

                    if(canColor)
                        color[u] = c;
                }
            }
            c++;
        }
    }

    cout<<"Vertex Colors:\n";
    for(int i=0;i<4;i++){
        cout<<"Vertex "<<i+1<<" -> Color "<<color[i]<<endl;
    }

    cout<<"Total colors used: "<<c-1<<endl;

    return 0;
}
