#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> arr(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        sum /= n;
        bool flag = 1;
        long long s = 0;
        for (int i = 0; i < n; i++) {
            s += arr[i] - sum;
            flag &= s >= 0;
        }
        cout << (flag ? "YES" : "NO") << endl;
       
    }

    return 0;
}
