#include <bits/stdc++.h>

using namespace std;

int main(void) {
    vector<int> vec(10);

    for(int i=0; i<=9; i++) {
        int input;
        cin >> input;
        vec.at(i) = input;
    }

    int t1, t2, t3;
    t1 = vec.at(0);
    t2 = vec.at(t1);
    t3 = vec.at(t2);

    cout << t3 << endl;

    return 0;
}
