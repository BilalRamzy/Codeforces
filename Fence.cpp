#include<iostream>
#include<vector>

using namespace std;



int main()
{
    int n, k; cin >> n >> k;

    vector<int> h(n);

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    
    int currnt_sum = 0;
    for (int i = 0; i < k; i++)
    {
        currnt_sum += h[i];
    }
    
    int min_sum = currnt_sum;
    int min_index = 0;

    for (int i = k; i < n; i++)
    {
        currnt_sum = currnt_sum - h[i -k] + h[i];
        if (currnt_sum < min_sum)
        {
            min_sum = currnt_sum;
            min_index = i - k + 1;
        }
        
    }
    cout << min_index + 1 << endl;
}