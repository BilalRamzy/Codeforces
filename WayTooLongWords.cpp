#include<iostream>
#include<string>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
    
        if(s.size() <= 10)
        {
            cout << s << endl;
        }
    
        char first = s[0];
        char last = s[s.size() -1];
    
        int count = 0;
        
        for (int i = 1; i < s.size() -1; i++)
        {
            cout << first << s[i] << last << endl;
        }
        
    }
    
    return 0;
}