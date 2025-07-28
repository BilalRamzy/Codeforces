#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<long long> health(n);
        vector<long long > postion(n);

        for (int  i = 0; i < n; i++)
        {
            health[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            postion[i];
        }
        
        vector<pair<long long, long long>> monstors;

        for (int i = 0; i < n; i++)
        {
            long long distance = abs(postion[i]);
            monstors.push_back({distance, health[i]});
        }
        
        sort(monstors.begin(), monstors.end());

        long long bullets_used = 0;
        bool can_servived = true;


        for (int i = 0; i < n; i++)
        {
            int distance = monstors[i].first;
            long long monstor_health = monstors[i].second;


            bullets_used += monstor_health;

            long long bullets_available = (long long) distance * k;

            if(bullets_used > bullets_available)
            {
                can_servived = false;
                break;
            }
        }
        cout << (can_servived ? "YES" : "NO") << endl;
    }

    return 0;
}