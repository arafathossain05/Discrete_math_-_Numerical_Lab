#include <iostream>
using namespace std;

int main(){

    int R1[3][3] = {
        {1,0,1},
        {1,0,0},
        {0,1,0}
    };

    int R2[3][3] = {
        {1,0,1},
        {0,1,1},
        {1,0,0}
    };

    cout<<"Union Matrix:\n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<(R1[i][j] || R2[i][j])<<" ";
        cout<<endl;
    }

    cout<<"\nIntersection Matrix:\n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<(R1[i][j] && R2[i][j])<<" ";
        cout<<endl;
    }
    return 0;
}
