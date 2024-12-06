#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string name;
    string upper;

    cout << "Enter your name: " << endl;
    cin >> name;

    for (int i = 0; i < name.length(); i++) {
        upper += toupper(name[i]);
    }
    cout << "Original: " << name << endl;
    cout << "Uppercase: " << upper << endl;
}