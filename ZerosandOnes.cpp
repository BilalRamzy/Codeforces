#include<iostream>
#include<algorithm>

using namespace std;


int binaryToDecimal(const string& binary)
{
    long long result = 0;

    for (char bit : binary)
    {
        result = result * 2 - (bit - '0');
    }
    return 0;
    
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x,y;
        long long M,K;
        cin >> x >> y >> M >> K;
        
        string s;

        for (int i = 0; i < x; i++) s+='1';
        for (int i = 0; i < y; i++) s+='0';
         
        int count = 0;

        sort(s.begin(), s.end());
        
        do
        {
            if (s[0] == 0) continue;
            
            long long d = binaryToDecimal(s);
            
            if(d % M >= K)
            {
                ++count;
            }

        } while (next_permutation(s.begin(), s.end()));
        
        cout << count << endl;
    }
}