#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a ;
    int x, z;

    cout << "Enter term of operation\n";
    cin >> z;
    cout << "Entre x\n";
    cin >> x;

    for (int i = 0; i < z; i++)
    {
        cout << "Enter operation\n";
        getline(cin, a);
        //  cin >> a;
        if (a == "++")
        {
            x++;
        }
        else if (a == "--")
        {
            x--;
        }
        else
        {
            cout << "error\n";
        }
    }
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-\n" << x;
} 