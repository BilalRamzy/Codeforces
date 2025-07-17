#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    long long m;

    cin >> n >> m;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int left = 0;
    long long sum = 0;
    int minlen = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        sum += A[i];

        while (sum >= m)
        {
            minlen = min(minlen, i - left + 1);

            sum -= A[left];
            ++left;
        }
        
    }
    if(minlen == INT_MAX)
    {
        cout << -1 << endl;
    } else{ 
        cout << minlen << endl;
    }
    
}