#include<iostream>
#include<vector>
using namespace std; 


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int width, height;
        cin >> width >> height;
    
    
        if (width != height)
        {
            cout << "Rectangle" << endl;
        } else {
            cout << "Square" << endl;
        }   
    }
}