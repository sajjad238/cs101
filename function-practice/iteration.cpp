// Programs based on iteration 
#include <iostream>
using namespace std;

// draw a rectangle of size len and width
void draw_rectange (unsigned int len, unsigned int width)
{
    for (unsigned int y=0; y < len; y++)
    {
        for (unsigned int x=0; x < width; x++)
        {
            cout << "~";
        }
        cout << endl;
    }
}

// input is prime number: true or false
bool prime_number (unsigned int input)
{
   // check half the numbers is enough
   for (unsigned int count = 2; count <= input/2; count ++)
   {
        if (input % count == 0)
        {
            return 0;
        }
   }

   return 1;
}

// input a number: return reverse
unsigned int number_reverse (unsigned int input)
{
    unsigned int reverse = 0;
    unsigned int digit = 0;

    while (input)
    {
        reverse *= 10;
        reverse += input % 10;
        input /= 10;
    }
    return reverse;
}
