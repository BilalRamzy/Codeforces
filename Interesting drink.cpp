#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int budget;
        cin >> budget;


        int count = upper_bound(a.begin(), a.end(), budget) - a.begin();

        cout << count << endl;
    }
    
    return 0;
}
