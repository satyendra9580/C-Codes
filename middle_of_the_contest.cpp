#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int h1, m1, h2, m2;
    char colon;

    cin >> h1 >> colon >> m1;
    cin >> h2 >> colon >> m2;

    int start_minutes = h1 * 60 + m1;
    int end_minutes = h2 * 60 + m2;

    int midpoint_minutes = (start_minutes + end_minutes) / 2;

    int h3 = midpoint_minutes / 60;
    int m3 = midpoint_minutes % 60;

    cout << setw(2) << setfill('0') << h3 << ":" << setw(2) << setfill('0') << m3 << endl;

    return 0;
}
