#include<iostream>
#include<vector>

using namespace std;



int main()
{
    int n,k;
    cin >> n >> k;

    vector<int> rem(k, 0);

    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        rem[d % k]++;
    }

    int ans = 0;

    for (int i = 1; i <= k /2; i++)
    {
        if (i != k -1)
        {
            ans += 2 * min(rem[i], rem[k -1]);
        }
    }
    ans += (rem[0] /2) *2;
    
    if (k % 2 == 0)
    {
        ans += (rem[k / 2] /2) *2;
    }
    
    cout << ans << endl;
}