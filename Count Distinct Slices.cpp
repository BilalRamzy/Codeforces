#include<bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long count = 0;
    int left = 0;

    unordered_set<int> seen;

    for (int right = 0; right < n; right++)
    {
        while (seen.find(arr[right]) != seen.end())
        {
           seen.erase(arr[left]);

           left++;
        }

        seen.insert(arr[right]);

        count += right - left + 1;
    }
    
    cout << count << endl;
}