#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

int solve(vector<int>& a)
{
    unordered_set<int> seen;
    int duplicates = 0;

    for (int x : a)
    {
        if (x <= a.size())
        {
            if (seen.count(x))
            {
                duplicates++;
            } else {
                seen.insert(x);
            }
        }
        else{
            duplicates++;
        }
        
    }
    
    int missing = 0;

    for (int i = 1; i < a.size(); i++)
    {
        if(!seen.count(i)) missing++;
    }
    return missing + duplicates;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        cout << solve(a) << endl;
    }
    
}