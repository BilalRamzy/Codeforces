#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    deque<int> dq;
    bool reversed = false;

    while (q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "push_back") {
            int n;
            cin >> n;
            if (!reversed)
                dq.push_back(n);
            else
                dq.push_front(n);
        } 
        else if (cmd == "toFront") {
            int n;
            cin >> n;
            if (!reversed)
                dq.push_front(n);
            else
                dq.push_back(n);
        } 
        else if (cmd == "front") {
            if (dq.empty()) {
                cout << "No job for Ada?\n";
            } else {
                if (!reversed) {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                } else {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
            }
        } 
        else if (cmd == "back") {
            if (dq.empty()) {
                cout << "No job for Ada?\n";
            } else {
                if (!reversed) {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                } else {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
            }
        } 
        else if (cmd == "reverse") {
            reversed = !reversed;
        }
    }

    return 0;
}
