#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    deque<int> A;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        A.push_back(x);
    }

    bool reversed = false;

    for (int i = 0; i < m; ++i) {
        int type;
        cin >> type;

        if (type == 1) {
            reversed = !reversed;
        } else {
            int d, val;
            cin >> d >> val;

            if (!reversed) {
                if (d == 1) A.push_front(val);
                else A.push_back(val);
            } else {
                if (d == 1) A.push_back(val);
                else A.push_front(val);
            }
        }
    }

    cout << A.size() << endl;

    if (!reversed) {
        for (int x : A) cout << x << " ";
    } else {
        for (auto it = A.rbegin(); it != A.rend(); ++it) cout << *it << " ";
    }

    cout << endl;
    return 0;
}
