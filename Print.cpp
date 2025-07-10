#include<iostream>

using namespace std;


void printNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i > 1) cout << " ";
        cout << i;
    }
    
}

int main()
{
    int n;
    cin >> n;
    printNumbers(n);
    return 0;
}