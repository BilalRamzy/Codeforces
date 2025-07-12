#include <iostream>
#include <queue>
using namespace std;

int main() {
    string sm, sa, sr;
    cin >> sm >> sa >> sr;

    queue<char> M, A, R;

    for (char c : sm) M.push(c);
    for (char c : sa) A.push(c);
    for (char c : sr) R.push(c);

    char turn = 'm';  // Start with Muhammad

    while (true) {
        if (turn == 'm') {
            if (M.empty()) {
                cout << 'M' << endl;
                break;
            }
            turn = M.front();
            M.pop();
        } else if (turn == 'a') {
            if (A.empty()) {
                cout << 'A' << endl;
                break;
            }
            turn = A.front();
            A.pop();
        } else if (turn == 'r') {
            if (R.empty()) {
                cout << 'R' << endl;
                break;
            }
            turn = R.front();
            R.pop();
        }
    }

    return 0;
}





