#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main()
{
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    vector<int> res(n);
    int maxRight = 0;

    for (int i = n - 1; i >= 0; --i)
    {
        if(h[i] > maxRight)
        {
            res[i] = 0;
        } else {
            res[i] = maxRight - h[i] + 1;
        }
        
        if(h[i] > maxRight)
        {
            maxRight = h[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    
    return 0;   
}