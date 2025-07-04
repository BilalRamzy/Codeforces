#include<iostream>
#include<unordered_set>

using namespace std;


int main()
{
    int n;
    cin >> n;
    unordered_set<int> table;

    int max_socks = 0;

    for (int i = 0; i < 2 * n; i++)
    {
        int socks;
        cin >> socks;

        if(table.count(socks))
        {
            table.erase(socks);
        } else{
            table.insert(socks);
            int current = table.size();
            if(current > max_socks)
            {
                max_socks = current;
            }
        }
    }
    cout << max_socks << endl;
    return 0;
}