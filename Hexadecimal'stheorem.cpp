#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<int> fib;

    fib.push_back(0);
    fib.push_back(1);


    while (fib.back() < n)
    {
        int nextFib = fib[fib.size() - 1]  + fib[fib.size() - 2];
        fib.push_back(nextFib);
    }
    int fibsize = fib.size();


    for (int i = 0; i < fibsize; i++)
    {
        for (int j = 0; j < fibsize; j++)
        {
            for (int k = 0; k < fibsize; k++)
            {
                if(fib[i] + fib[j] + fib[k] == n)
                {
                    cout << fib[i] << " " << fib[j] << " " << fib[k] << endl;
                    return 0;
                }
            }
            
        }
        
    }
    
        cout << "I'm too stupid to solve this problem" << endl;
    return 0;
}