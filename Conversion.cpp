#include <iostream>
#include <string>
using namespace std;



int main()
{
    string s;

    getline(cin , s);

    for (char& c : s)
    {
        if (c == ',')
        {
            c = ' ';
        } else if(isupper(c))
        {
            c = tolower(c);
        } else if(islower(c))
        {
            c = toupper(c);
        }
    }
    cout << s << endl;
}