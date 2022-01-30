#include <bits/stdc++.h>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int> > vec(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        cin >> vec.at(i).at(j);
      }
    }

    for (int j = 0; j < W; j++) {
        for (int i = 0; i < H; i++) {
            cout << vec.at(i).at(j);
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
