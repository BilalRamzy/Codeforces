#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q;
    cin >> n >> q;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    // Process each query
    for (int i = 0; i < q; i++) {
        string operation;
        int x;
        cin >> operation >> x;
        
        if (operation == "binary_search") {
          
            bool found = binary_search(arr.begin(), arr.end(), x);
            if (found) {
                cout << "found" << endl;
            } else {
                cout << "not found" << endl;
            }
        }
        else if (operation == "lower_bound") {
    
            auto it = lower_bound(arr.begin(), arr.end(), x);
            
            if (it == arr.end()) {
                // No element >= x found
                cout << -1 << endl;
            } else {
                cout << *it << endl;
            }
        }
        else if (operation == "upper_bound") {
            auto it = upper_bound(arr.begin(), arr.end(), x);
            
            if (it == arr.end()) {
                // No element > x found
                cout << -1 << endl;
            } else {
                cout << *it << endl;
            }
        }
    }
    
    return 0;
}

