#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string st;

    for(char c : s)
    {
        if(!st.empty() && st.back() == c)
        {
            st.pop_back();
        } else {
            st.push_back(c);
        }
    }
    cout << st;
}