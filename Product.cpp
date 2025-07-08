#include <iostream>
using namespace std;


int main()
{
    int r,l,m;
    cin >> l >> r >> m;

    long long result = 1;

    for (int i = l; i <= r; i++)
    {
        result = ( result * i ) % m;
    }
    cout << result << endl;

    return 0;

}