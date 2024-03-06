#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;

int find_max(int *arr, int l, int r) {
    int max = arr[l];
    for (int i = l + 1; i <= r; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void compute_max(int *arr, int l, int r) {
    int count = r - l + 1;


if (count < 10) {
    int max = find_max(arr, l, r);
    cout << "Process " << getpid() << " (Parent " << getppid() << "): Max in chunk [" << l << ", " << r << "] is " << max << endl;
    exit(max % 256); 
}

else {
        int m = (l + r) / 2;
        pid_t left_child, right_child;

        left_child = fork();

        if (left_child == 0) { 
            compute_max(arr, l, m);
        } else { 
            right_child = fork();

            if (right_child == 0) { 
                compute_max(arr, m + 1, r);
            } else { 
                int status;
                waitpid(left_child, &status, 0);
                int max_left = WEXITSTATUS(status);

                waitpid(right_child, &status, 0);
                int max_right = WEXITSTATUS(status);

                int max = (max_left > max_right) ? max_left : max_right;
                cout << "Process " << getpid() << " (Parent " << getppid() << "): Max in chunk [" << l << ", " << r << "] is " << max << endl;
                exit(max);
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <array_size>" << endl;
        exit(EXIT_FAILURE);
    } 

    int n = atoi(argv[1]);
    if (n <= 0) {
        cerr << "Array size must be a positive integer." << endl;
        exit(EXIT_FAILURE);
    }

    int *arr = new int[n];

    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 51 + 50;
    }

    cout << "Initial Array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    compute_max(arr, 0, n - 1);

    delete[] arr;

    return 0;
}
