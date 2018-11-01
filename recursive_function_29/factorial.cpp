/* Implement factorial function using recursive approach
 * factorial of 4 = [4*3*2*1] = 24
 */
#include <iostream>

using namespace std;

unsigned int fac (unsigned int);
void fac_void (unsigned int *, unsigned int);

int main()
{
    unsigned int out;
    out = fac (4);
    cout << "factorial of 4 = " << out << endl;
}

/* We need a function that takes positive integer and output factorial
   using recursive approach, return must be 1 otherwise the 'return 0' statement will make all zero on last multiple
   because at the end 'fac' will be replace by a number which is equal to last return, so it should be 1, to not to effect multiplication
   return 1 is also a requirment in this case either.
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
