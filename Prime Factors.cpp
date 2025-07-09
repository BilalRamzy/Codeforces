#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 2; i * 1LL * i <= n; i++ )
    {
        int power = 0;
        while(n % i == 0)
        {
            n /= i;
            power++;
        }
        if(power > 0)
        {
            cout << i << " " << power << endl;
        }
        if(n > 1)
        {
            cout << n << " 1" << endl;
        }
    }
    return 0;
}
