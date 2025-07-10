#include<iostream>
#include<deque>
#include<string>

using namespace std;


int main()
{
    int q; cin >> q;

    deque<int> dq;

    while(q--)
    {
        string cmd;
        cin >> cmd;
   if (cmd == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
        } else if (cmd == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x);
        } else if (cmd == "pop_front") {
            dq.pop_front();
        } else if (cmd == "pop_back") {
            dq.pop_back();
        } else if (cmd == "front") {
            cout << dq.front() << endl;
        } else if (cmd == "back") {
            cout << dq.back() << endl;
        } else if (cmd == "print") {
            int x;
            cin >> x;
            cout << dq[x - 1] << endl;
        }
    }

    return 0;
}



