#include<iostream>
#include<vector>


using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max_children = 0;

    for (int sum = 2; sum < 200000; sum++)
    {
        vector<bool> used(n, false);

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if(used[i]) continue;

            for (int j = i + 1; j < n; j++)
            {
                if(used[i]) continue;
                if (a[i] + a[j] == sum) {
                    used[i] = used[j] = true;
                    count++;
                    break;
                }
            
            }
            
        }
        max_children = max(max_children, count);
        
    }
    cout << max_children << endl;
}