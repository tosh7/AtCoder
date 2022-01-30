#include <iostream>

using ll = long long;
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll min, max;
    ll value = 1;
    for(int i = 0; i <= 30; i++) {
        value = value * 2;
    }
    max = value;
    min = -value;
//    cout << min << endl;
//    cout << max << endl;
    if(min <= n && max > n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
