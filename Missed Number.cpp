#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1,a2,a4,a5;
        cin >> a1 >> a2 >> a4 >> a5;
        vector<int> arr = {a1 + a2, a4 - a2, a5 - a4};
        int best = 0;

        for (int a3 : arr)
        {
            int score = 0;
            if(a3 == a1 + a2) score++;
            if(a3 == a4 - a2) score++;
            if(a3 == a5 - a4) score++;
            best = max(best, score);
        }
        cout << best << endl;
    }
    
    return 0;
}