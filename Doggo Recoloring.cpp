#include<iostream>
#include<string>
#include<vector>


using namespace std;


int main()
{
    int n;
    string s;
    cin >> n >> s;

    vector<int> freq(26, 0);

    for (char c : s)
    {
        freq[c - 'a'];
    }

    for (int count : freq)
    {
        if(count >= 2)
        {
            cout << "YES" << endl;
        }
        return 0;
    }
    
    if (n == 1)
    {
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    
    return 0;
}