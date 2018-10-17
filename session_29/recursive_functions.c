#include <iostream>

using namespace std;

void function0(void);
void function1(void);
void function2(void);

int main ()
{
	function0();
}

void function0 (void)
{
	cout << "Function 0" << endl;
	function1();
}

void function1 (void)
{
	cout << "Function 1" << endl;
	function2();
}

void function2 (void)
{
	cout << "Function 2" << endl;
	function0();
}
