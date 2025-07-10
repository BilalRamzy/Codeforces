#include<iostream>
#include<string>

using namespace std;




int main()
{
    string s;

    getline(cin, s);
<<<<<<< HEAD


=======
>>>>>>> 1b6bcbe (first commit)
    for (char c : s)
    {
        if (c == '\\') break;
        {
            cout << c;
        }
        
    }
    
    return 0;
}