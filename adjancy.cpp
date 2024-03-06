#include <iostream>

void displayAdjacencyMatrix(int** adjMatrix, int numVertices) {
    std::cout << "Adjacency Matrix:" << std::endl;
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            std::cout << adjMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void addConnection(int** adjMatrix, int from, int to) {
    // Assuming an undirected graph, so set both directions in the matrix
    adjMatrix[from][to] = 1;
    adjMatrix[to][from] = 1;
}

void removeConnection(int** adjMatrix, int from, int to) {
    // Assuming an undirected graph, so remove both directions in the matrix
    adjMatrix[from][to] = 0;
    adjMatrix[to][from] = 0;
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

int main() {
    // Example: Creating an adjacency matrix for a graph with 4 vertices
    int numVertices = 4;
    int** adjacencyMatrix = new int*[numVertices];
    for (int i = 0; i < numVertices; ++i) {
        adjacencyMatrix[i] = new int[numVertices];
    }

    // Initialize the adjacency matrix with zeros
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            adjacencyMatrix[i][j] = 0;
        }
    }

    // Display the initial adjacency matrix
    displayAdjacencyMatrix(adjacencyMatrix, numVertices);

    // Add connections
    addConnection(adjacencyMatrix, 0, 1);
    addConnection(adjacencyMatrix, 0, 2);
    addConnection(adjacencyMatrix, 1, 2);
    addConnection(adjacencyMatrix, 1, 3);

    // Display the updated adjacency matrix after adding connections
    std::cout << "\nAfter adding connections:\n";
    displayAdjacencyMatrix(adjacencyMatrix, numVertices);

    // Remove connection
    removeConnection(adjacencyMatrix, 0, 1);

    // Display the updated adjacency matrix after removing a connection
    std::cout << "\nAfter removing connection:\n";
    displayAdjacencyMatrix(adjacencyMatrix, numVertices);

    // Check connection
    int from = 2, to = 3;
    if (isConnected(adjacencyMatrix, from, to)) {
        std::cout << "\nVertices " << from << " and " << to << " are connected.\n";
    } else {
        std::cout << "\nVertices " << from << " and " << to << " are not connected.\n";
    }

    // Get neighbors of a vertex
    getNeighbors(adjacencyMatrix, 1, numVertices);

    // Free allocated memory
    for (int i = 0; i < numVertices; ++i) {
        delete[] adjacencyMatrix[i];
    }
    delete[] adjacencyMatrix;

    return 0;
}
