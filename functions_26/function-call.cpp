#include <iostream>

using namespace std;

/* Implement simple swap function using 
* call by value 
* call by reference method
*/

void swap_by_value (int v1, int v2);
void swap_by_reference (int &v1, int &v2);

int main()
{
	int a = 3; int b = 9;
	cout << "Initial values :" << endl;
	cout << "a = " << a << " " << "b = " << b << endl;
	swap_by_value (a, b);
	cout <<"After swap by value" << endl;
	cout << "a = " << a << " " << "b = " << b << endl;

	cout << "Initial values :" << endl;
	cout << "a = " << a << " " << "b = " << b << endl;
	swap_by_reference (a, b);
	cout << "After swap by reference" << endl;
	cout << "a = " << a << " " << "b = " << b << endl;

}

/*
* swap function is suppose to return two values so non-void return type is not useful
* Input can be integer
* This function is useless, as it can't return two value without using some reference
*/
void swap_by_value (int v1, int v2)
{
	int temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}

/*
* swap function implement as by-reference parameter passing
* this function can be of two formates, 
	(int &v1, int &v2) -> this will copy the physical memory address of variable '&v1' is not a pointer, it is a variable on the same memory address as passed
	(int *v1, int *v2) -> this will expect that memory address is passed as parameter
* Process values will be stored back to memory address passed by the caller, that way it got indirect reference
*/
void swap_by_reference (int &v1, int &v2)
{
	int temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}
