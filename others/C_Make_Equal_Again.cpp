#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        unordered_map<int, int> freq;

        // Input and calculate frequency
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int max_freq = 0;
        for (auto& p : freq) {
            max_freq = max(max_freq, p.second);
        }

        int min_cost = n - max_freq;

        cout << min_cost << endl;
    }

    return 0;
}
