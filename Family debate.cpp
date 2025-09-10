#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    deque<char> dq;

    for(int i = 1; i <= q; i++)
    {
        int type;
        cin >> type;

        if(type == 1)
        {
            char last = dq.front();
            dq.pop_front();
            if(dq.empty())
            {
                cout << i << " " << last << endl;
                return 0;
            }
        }

        else if(type == 2)
        {
            char last = dq.back();
            dq.pop_back();
            if(dq.empty())
            {
                cout << i << " " << last << endl;
                return 0;
            }
        }

        else if(type == 3)
        {
            char c;
            cin >> c;
            dq.push_front(c);
        }

        else if(type == 4)
        {
            char c;
            cin >> c;
            dq.push_back(c);
        }
    }
    return 0;
}