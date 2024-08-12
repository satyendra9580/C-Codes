#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> frequency_count(const string& s) {
    vector<int> freq(26, 0); // 26 for each letter in the alphabet
    for (char ch : s) {
        freq[ch - 'a']++;
    }
    return freq;
}

bool can_form_hash(const string& p, const string& h) {
    int p_len = p.length();
    int h_len = h.length();

    // Get frequency count of the password p
    vector<int> p_freq = frequency_count(p);

    // Traverse each substring of h with the same length as p
    for (int i = 0; i <= h_len - p_len; i++) {
        // Get the substring frequency count
        string substring = h.substr(i, p_len);
        vector<int> sub_freq = frequency_count(substring);

        // Compare the frequency of the substring with p's frequency
        if (p_freq == sub_freq) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string p, h;
        cin >> p >> h;

        if (can_form_hash(p, h)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
