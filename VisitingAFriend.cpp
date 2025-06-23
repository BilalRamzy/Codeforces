#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int n,m;
    cin >> n >> m;

    vector<pair<int, int>> tele(n);

    for (int i = 0; i < n; i++)
    {
        cin >> tele[i].first >> tele[i].second;
    }

    int reachable = 0;

    for (int i = 0; i < n; i++)
    {
        int a = tele[i].first;
        int b = tele[i].second;

        if(a <= reachable)
        {
            reachable = max(reachable, b);
        } else {
            break;
        }
    }
    
    if (reachable >= m)
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}