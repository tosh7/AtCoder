#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(void) {
    ll n;
    cin >> n;

    int a = 1;
    for(int i=0; i<n; i++) {
        a = a * 2;
    }

    ll b = n * n;
    if(a > b || n > 1000) {
        cout << "Yes" << endl;
    } else {
        cout << "No"<< endl;
    }

    return 0;
}
