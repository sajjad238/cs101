/* Implement factorial function using recursive approach
 * factorial of 4 = [4*3*2*1] = 24
 */

#include <iostream>

using namespace std;

unsigned int fac (unsigned int);

int main()
{
    unsigned int out;
    out = fac (4);
    cout << "factorial of 4 = " << out << endl;
}

/* We need a function that takes positive integer and output factorial
   for recursive function, alternative return 1 is compulsory otherwise the 'return' statement will stuck when input = 0
 */
unsigned int fac (unsigned int input)
{
    if (input > 0)
    {
        input *= fac (input - 1);
        return input;
    }

    else
        return 1;
}
