#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        int k;
        cin >> k;
        int left = 0;
        int right = n -1;
        int result = -1;
        while (left <= right)
        {
            int mid = left + (right -left) / 2;

            if(a[mid] > k)
            {
                result = a[mid];
                right = mid -1;
            } else {
                left = mid + 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}