/* Virahanka number Vn = Vn-1 + Vn-2
   V4 = V3 + V2
 */  

#include <iostream>

using namespace std;

unsigned int virahanka (unsigned int);

int main()
{
    cout << "Virahanka (6) = " << virahanka (6) << endl;
    return 0;
}

/* virahanka number are type of fictorial who's iteration increase exponentionally
   Input: unsigned int
   Output: unsigned int
 */
unsigned int virahanka (unsigned int input)
{
    if (input == 0 || input == 1)
        return 1;

    else
        return (virahanka (input - 1) + virahanka (input - 2));
}
