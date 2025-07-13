#include<iostream>
#include<unordered_map>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q; cin >> n >> q;

    unordered_map<string, long long> friends;

    for (int i = 0; i < n; i++)
    {
        string name;
        long long money;
        cin >> name >> money;
        friends[name] = money;
    }

    for (int i = 0; i < q; i++)
    {
        int type; cin >> type;

        if (type == 1)
        {
            string name;
            long long amount;
            cin >> name >> amount;

            friends[name] += amount;
            
        } else if(type == 2)
        {
            string name; cin >> name;
            cout << friends[name] << endl;
        }
    }
    
    return 0;
    
}