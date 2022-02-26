#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(n))

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> vec.at(i).at(j);
        }
    }
    return 0;
}
