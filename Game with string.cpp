#include<iostream>
#include<stack>

using namespace std;



int main()
{
    string s; cin >> s;


    stack<char> st;

    int count = 0;

    for (char c : s)
    {
        if(!st.empty() && st.top() == c) // abba
        {
            st.pop();
            count++;
        } else
        {
            st.push(c);
        }
    }
    
    if(count % 2 == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
