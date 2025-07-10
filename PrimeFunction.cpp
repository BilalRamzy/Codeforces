#include<iostream>
#include<cmath>

using namespace std;

<<<<<<< HEAD
bool isPrime(int n)
=======
bool isPrime(long long n)
>>>>>>> 1b6bcbe (first commit)
{
    if (n <= 1)
    {
        return false;
    } if(n == 2)
    {
        return true;
    } if(n % 2 == 0)
    {
        return false;
    }
    
<<<<<<< HEAD
    for (int i = 3; i <= sqrt(n); i+=2)
=======
    for (long long i = 3; i * i <= n; i+=2)
>>>>>>> 1b6bcbe (first commit)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
<<<<<<< HEAD
        int n;
=======
        long long n;
>>>>>>> 1b6bcbe (first commit)
        cin >> n;

        if(isPrime(n))
        {
            cout << "YES"<< endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}