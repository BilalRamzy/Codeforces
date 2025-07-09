#include<iostream>
#include<stack>
#include<string>

using namespace std;


int main()
{
    string s; cin >> s;

    stack<char> stack;

    bool empty = false;

    for(char c : s)
    {
        if(c == '(')
        {
            stack.push(c);
        } else if(c == ')')
        {
            if(stack.empty())
            {
                cout << "no" >> endl;
                return 0;
            }
            stack.pop();
        }
    }
    if(stack.empty())
    {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}






