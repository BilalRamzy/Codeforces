#include<iostream>
<<<<<<< HEAD
#include<vector>
=======
>>>>>>> 1b6bcbe (first commit)
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

        if (s.find("010") != string::npos || s.find("101") != string::npos)
        {
<<<<<<< HEAD
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
        }
        
    }
    

=======
            cout << "GOOD" << endl;
        } else {
            cout << "BAD" << endl;
        }
    }
    
    return 0;
>>>>>>> 1b6bcbe (first commit)
}
