#include<iostream>
#include<stack>
#include<string>

using namespace std;


int main()
{
    int q;
    cin >> q;

    stack<int> s;

    while(q--)
    {
        string cmd;
        cin >> cmd;
        if(cmd == "push")
        {
            int x;
            cin >> x;
            s.push(x);
        } else if(cmd == "pop")
        {
            s.pop();
        } else if(cmd == "top")
        {
            cout << s.top() << endl;
        }
    }
    return 0;
}
