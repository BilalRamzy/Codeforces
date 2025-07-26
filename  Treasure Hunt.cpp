#include<bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x ,y ,a;
        cin >> x >> y >> a;

        long long target = 2 * a + 1;
        long long total_depth = 0;
        long long day = 1;

        while (true)
        {
            if(day % 2 == 1)
            {
                total_depth += 2 * x;
                
                if(total_depth > target)
                {
                    cout << "NO" << endl;
                    break;
                }
            } else {
                total_depth += 2 * y;

                if (total_depth > target)
                {
                    cout << "YES" << endl;
                    break;
                }
                
            }
            day++;
        }
    }
    return 0;
}