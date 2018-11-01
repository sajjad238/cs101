#include <iostream>

using namespace std;

int main ()
{
    int a, b, c;
    
    b = 2; c = 3;
    a = b + c;

    // There is no lose of information, because the operation matches decleration
    cout << "a = b + c " << a << endl;

    // Lose of information, operation is floating but variable's decleration is integar 
    a = b / c;
    cout << "a = b / c " << a << endl;
}
