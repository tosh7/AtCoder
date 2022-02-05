#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(void) {
    int n;
    cin >> n;

    vector<int> vec(n);
    int cRad = 0;
    bool over = false;

    for(int i=0;i<n;i++) {
        int r, nRad;
        cin >> r;
        nRad = cRad + r;
        if(nRad >= 360) {
            nRad = nRad - 360;
            over = true;
        }
        vec.at(i) = nRad;
        cRad = nRad;
    }
//    for(int i=0;i<n;i++) {
//        cout << vec.at(i) << endl;
//    }

    sort(vec.begin(), vec.end());
//    for(int i=0;i<n;i++) {
//        cout << vec.at(i) << endl;
//    }
    int diff = vec[0];
    for(int i=1;i<n;i++) {
        if(diff < vec[i] - vec[i-1]) {
            diff = vec[i] - vec[i-1];
        }
    }

    if(!over) {
        int rest = 360 - vec.at(n-1);
        if(diff < rest) {
            diff = rest;
        }
    }

    cout << diff << endl;
    return 0;
}
