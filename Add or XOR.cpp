#include<iostream>
#include<queue>
#include<unordered_map>

using namespace std;

int solve(int a, int b, int x, int y)
{
    if (a == b) return 0;
    
    queue<pair<int,int>> q;
    unordered_map<int, int> visited;

    q.push({a, 0});
    visited[a] = 1;

    while (!q.empty())
    {
        auto [val, cost] = q.front();
        q.pop();

        if (val + 1 <= 200 && !visited[val + 1])
        {
            if (val + 1 == b) return cost + x;
            visited[val + 1] = 1;
            q.push({val + 1, cost + x});
        }
        
        int xor_val = val ^ 1;

        if (xor_val <= 200 && !visited[xor_val])
        {
            if(xor_val == b) return cost + y;
            visited[xor_val] = 1;
            q.push({xor_val, cost + y});
        }
        
    }
    return -1;
}


int main() {
    int t; cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        cout << solve(a, b, x, y) << endl;
    }
}