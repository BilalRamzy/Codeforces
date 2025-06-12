#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long> a(n + 1, 0);         // 1-based index
    vector<long long> prefix(n + 1, 0);    // prefix[i] = sum from a[1] to a[i]

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];  // build prefix sum
    }

    while (q--) {
        int L, R;
        cin >> L >> R;
        cout << prefix[R] - prefix[L - 1] << endl;
    }

    return 0;
}
