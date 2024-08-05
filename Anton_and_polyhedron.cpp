#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> faces_count = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int n;
    cin >> n;
    string polyhedron;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> polyhedron;
        sum += faces_count[polyhedron];
    }

    cout << sum << endl;

    return 0;
}
