#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int count = 0;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    int x = a[i], y = a[j], z = a[k];
                    int sum = x + y + z;

                    int maxBlue = max({x, y, z, a[n - 1]});
                    int minRed = min({sum - x, sum - y, sum - z});

                    if (minRed > maxBlue)
                        count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
