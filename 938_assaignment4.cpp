#include<bits/stdc++.h>
using namespace std;
void displayAdjancy(int **Adjmatrix, int vertices){
    cout<<"Adjancy matrix"<<endl;
    for(int i=0; i<vertices; i++){
        for(int j=0; j<vertices; j++){
            cout<<Adjmatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void addConnection(int **Adjmatrix, int from, int to){
    Adjmatrix[from][to] = 1;
    Adjmatrix[to][from] = 1;
}

void removeConnection(int **Adjmatrix, int from, int to){
    Adjmatrix[from][to] = 0;
    Adjmatrix[to][from] = 0;
}

bool isConnected(int** adjMatrix, int from, int to) {
    return adjMatrix[from][to] == 1;
}

void getNeighbors(int** adjMatrix, int vertex, int numVertices) {
    std::cout << "Neighbors of vertex " << vertex << ": ";
    for (int i = 0; i < numVertices; ++i) {
        if (adjMatrix[vertex][i] == 1) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}
 
int main(){
    int num;
    cout<<"Enter number of vertices: ";
    cin>>num;
    int **Adjmatrix= new int*[num];
    for(int i=0; i<num; i++){
        Adjmatrix[i]=new int[num];
    }

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            Adjmatrix[i][j]=0;
        }
    }

    displayAdjancy(Adjmatrix, num);

    addConnection(Adjmatrix, 0, 1);
    addConnection(Adjmatrix, 0, 2);
    addConnection(Adjmatrix, 1, 2);
    addConnection(Adjmatrix, 1, 3);

    cout<<"After adding connections: "<<endl;
    displayAdjancy(Adjmatrix, num);
    removeConnection(Adjmatrix, 0, 1);

    cout << "After removing connection: "<<endl;
    displayAdjancy(Adjmatrix, num);

    int from = 2, to = 3;
    if (isConnected(Adjmatrix, from, to)) {
        cout << "\nVertices " << from << " and " << to << " are connected.\n";
    } else {
        cout << "\nVertices " << from << " and " << to << " are not connected.\n";
    }

    getNeighbors(Adjmatrix, 1, num);

    for(int i=0; i<num; i++){
        delete[] Adjmatrix[i];
    }
    delete[] Adjmatrix;

    return 0;
}