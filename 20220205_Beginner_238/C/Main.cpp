#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int counter = 1;
    int sum = 0;

    for(int i=1; i<n+1; i++) {
        if(i >= counter * 10) {
            counter = counter * 10;
        }
        sum += i - counter + 1;
        if(sum > 998244353) {
            sum -= 998244353;
        }
    }
    cout << sum << endl;

    return 0;
}
