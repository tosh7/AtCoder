#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;

//    string rstr;
//    int front = 0, back = 0;
//    bool cha = true;
//
//    for(long unsigned int i=0; i<str.size();i++) {
//        if(str.at(i) == 'a') {
//            if (cha) {
//                front++;
//                if(front == str.size() - 1) {
//                    cout << "Yes" << endl;
//                    return 0;
//                }
//            } else {
//                back++;
//            }
//        } else {
//            cha = false;
//            back = 0;
//        }
//    }
//
//    int counter = back - front;
//    if(counter >= 0) {
//        for(int i=0; i<counter;i++) {
//            str.insert(0, "a");
//        }
//    }
//
//    rstr = str;
//    for(long unsigned int i=0; i<str.size() / 2;i++) {
//        rstr.at(str.size() - i - 1) = str.at(i);
//        if(str.at(i) != str.at(str.size() - i - 1)) {
//            cout << "No" << endl;
//            return 0;
//        }
//    }
//    cout << "Yes" << endl;

    int counter = 0
    for(long unsigned int i=0; i<str.size();i++) {
        if(str.at(i) == 'a') {
            couter++;
        } else {

        }
        rstr.at(str.size() - i - 1) = str.at(i);
        if(str.at(i) != str.at(str.size() - i - 1)) {
            cout << "No" << endl;
            return 0;
        }
    }

    return 0;
}
