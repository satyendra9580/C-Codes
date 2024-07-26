#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

const int ALPHABET_SIZE = 26;

vector<vector<int>> buildPrefixFrequency(const string& s) {
    int n = s.size();
    vector<vector<int>> freq(n + 1, vector<int>(ALPHABET_SIZE, 0));

    for (int i = 0; i < n; ++i) {
        int c = s[i] - 'a';
        for (int j = 0; j < ALPHABET_SIZE; ++j) {
            freq[i + 1][j] = freq[i][j] + (j == c ? 1 : 0);
        }
    }

    return freq;
}

vector<int> getFrequencyInRange(const vector<vector<int>>& freq, int l, int r) {
    vector<int> count(ALPHABET_SIZE, 0);
    for (int i = 0; i < ALPHABET_SIZE; ++i) {
        count[i] = freq[r][i] - freq[l - 1][i];
    }
    return count;
}

int minOperations(const vector<int>& freqA, const vector<int>& freqB) {
    int operations = 0;
    for (int i = 0; i < ALPHABET_SIZE; ++i) {
        if (freqA[i] < freqB[i]) {
            operations += freqB[i] - freqA[i];
        }
    }
    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        string a, b;
        cin >> a >> b;

        auto freqA = buildPrefixFrequency(a);
        auto freqB = buildPrefixFrequency(b);

        while (q--) {
            int l, r;
            cin >> l >> r;
            vector<int> freqInA = getFrequencyInRange(freqA, l, r);
            vector<int> freqInB = getFrequencyInRange(freqB, l, r);
            cout << minOperations(freqInA, freqInB) << '\n';
        }
    }

    return 0;
}
