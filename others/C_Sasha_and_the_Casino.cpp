#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long k, x, a;
        cin >> k >> x >> a;

        k--; 
        x++;
        long long ans=0;

        while(x--){
            ans += ans/k+1;
            if(ans > a) break;
        }
        if(ans<=a){
            cout<< "YES\n";
        }else{
            cout<< "NO\n";
        }
    }

    return 0;
}
