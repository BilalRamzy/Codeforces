#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> trucks(n);
        for (int i = 0; i < n; ++i) {
            cin >> trucks[i];
        }

        stack<int> sideStreet;
        int expected = 1;

        for (int i = 0; i < n; ++i) {
            int curr = trucks[i];
            while (!sideStreet.empty() && sideStreet.top() == expected) {
                sideStreet.pop();
                expected++;
            }
        }

        if(curr == expected)
        {
            expected++;
        } else {
            sideStreet.push(curr);
        }
        }
        while (!sideStreet.empty() && sideStreet.top() == expected) {
                    sideStreet.pop();
                    expected++;
                }
            }

            if(expe)
    }


