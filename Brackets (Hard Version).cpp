#include<iostream>
#include<stack>

using namespace std;


int main()
{
    stack<char> st;

    for(char c : s)
    {
        if(c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        } else if(c == ')' || c == '}' || c == ']')
        {
            st.pop();
        }
    }
    if(st.empty())
    {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
