#include <iostream>

using namespace std;
int main ()
{
    int a = 1; int b = 2;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a < b " << (a < b) << endl;
    cout << "a > b " << (a > b) << endl;
    cout << boolalpha << (a < b);
}    
