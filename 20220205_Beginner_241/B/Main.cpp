#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);

    for(int i=0; i<n; i++) {
//        cout << "1:" << i << endl;
        ll input;
        cin >> input;
        a.at(i) = input;
    }

    for(int i=0; i<m; i++) {
//        cout << "2:" << i << endl;
        ll input;
        cin >> input;

        int hoge = a.size();
//        cout << "sizeOf:" << a << endl;
//        cout << "sizeOf:" << hoge << endl;
        bool suc = false;
        for(int j=0; j<hoge; j++) {
//            cout << "3:" << j << endl;
            if (a.at(j) == input) {
                a.erase(a.begin() + j);
                suc = true;
                break;
            }
        }
        if (!suc) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
