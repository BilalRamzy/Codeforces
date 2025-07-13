#include <iostream>
#include <set>
using namespace std;




int main()
{
    int q; cin >> q;

    set<long long> a;
    while (q--)
    {
        string cmd;
        long long x;
        cin >> cmd >> x;

        if(cmd == "insert")
        {
            a.insert(x);
        } else if(cmd == "find")
        {
            if(a.find(x) != a.end())
            {
                cout << "found" << endl;
            } else{
                cout << "not found" << endl;
            }
        }
        else if(cmd == "lower_bound")
        {
            auto it = a.lower_bound(x);
            if(it != a.end())
            {
                cout << *it << endl;
            } else{
                cout << -1 << endl;
            }
        }
        else if(cmd == "upper_bound")
        {
            auto it = a.upper_bound(x);
            if(it != a.end())
            {
                cout << *it << endl;
            } else {
                cout << -1 << endl;
            }
        }

    }
    return 0;
}