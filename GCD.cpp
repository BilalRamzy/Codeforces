#include <iostream>
#include <algorithm> 
using namespace std;



using namespace std;


int main()
{
    long long a,b; cin >> a >> b;

    long long g = __gcd(a, b);

    long long lcm = (a / g) * b;

    cout << g << " " << lcm << endl;

    return 0;
}