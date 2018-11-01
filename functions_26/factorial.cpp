#include <iostream>

using namespace std;

unsigned int fac (unsigned int);

int main()
{
    cout << "factorial of 4 : " << fac (4) << endl;
}

unsigned int fac (unsigned int input)
{
    unsigned int ret = 1;
    for (unsigned int i = 1; i <= input; i ++)
    {
        ret *= i;
        cout << "input = " << ret << endl;
    }

    return ret;
}
