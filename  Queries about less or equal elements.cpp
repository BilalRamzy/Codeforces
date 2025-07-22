#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    sort(a.begin(), a.end());

    for(int j = 0; j < m; j++)
    {
        int result = upper_bound(a.begin(), a.end(), b[j]) - a.begin();
        cout << result << " ";
    }
    return 0;
}
