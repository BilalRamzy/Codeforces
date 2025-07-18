#include<bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n); // 1 4 -3

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());

    long long min_abs_sum = LONG_MAX;

    for (int i = 0; i < n; i++)
    {
        min_abs_sum = min(min_abs_sum, abs(2 * a[i]));
    }
    
    int left = 0;
    int right = n -1;

    while (left < right)
    {
        long long current_sum = a[left] + a[right];
        min_abs_sum = min(min_abs_sum, abs(current_sum));
    
        if(current_sum < 0)
        {
            left++;
        } else {
            right--;
        }
    }
    
    cout << min_abs_sum << endl;
}