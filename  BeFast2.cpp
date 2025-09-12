#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long L,R,N;
    cin >> L >> R >> N;

    long long total = R - L + 1;
    long long divisible = R / N - (L - 1) / N;

    long long result = total - divisible;

    cout << result << endl;
    return 0;
}