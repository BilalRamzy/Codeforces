#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        if(a[i] > 0)
        {
            sum += a[i];
        } else {
            break;
        }
    }
    
    cout << sum << endl;
}

