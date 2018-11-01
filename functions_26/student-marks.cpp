/* 
* Understanding functions:
* This program get the number of students, assume 10 students
* get the mark of quiz_1 and quiz_2
* cipher the marks as (2^quiz_1 * 3^quiz2)
* deciper the marks as original 
*/

#include <iostream>
#define NUM_STUDENT 3

using namespace std;

void cipher_test(void);
void student_marks();
int cipher (int value1, int value2);
int powerof (int base, int exponent);
void error (const unsigned long line_number, const char *file_name);

int main()
{
	//cipher_test();
	student_marks();
}


/* Process student marks */
void student_marks (void)
{
	int quiz1_marks, quiz2_marks, student, c_marks;

	for (student = 0; student < NUM_STUDENT; student ++)
	{
getmarks:
		cout << "Enter marks of student " << student << " quiz1 and quiz2 : ";
		cin >> quiz1_marks >> quiz2_marks;

		// Marks should be positive or zero
		if (quiz1_marks * quiz2_marks >= 0)
		{
			/* send the marks for cipher */
			c_marks = cipher (quiz1_marks, quiz2_marks);
			cout << "ciphered marks : " << c_marks << endl;
		}
		else
		{
			cout << "Invalide marks!!" << endl;
			goto getmarks;
		}

		/* decipher the marks and show */
	}
}

/* cipher formula 2^value1 * 3^value2 */
int cipher (int value1, int value2)
{
	int two_power = 1;
	two_power = powerof (2, value1);

	int three_power = 1;
	three_power = powerof(3, value2);

	return (two_power * three_power);
}

void decipher (int ciphered_marks, int *value1, int *value2)
{
	// Mathematical revers is not possible, lookup table should be used
}

/* base > 0, exponent >= 0 */
int powerof (int base, int exponent)
{
	if (base > 1 && exponent >= 0)
	{
		int powerof = 1;

		for (int i = 0; i < exponent; i ++, powerof *= base);

		return powerof;
	}

	else
		error (__LINE__, __FILE__);
}

void error (const unsigned long line_number, const char *file_name)
{
	cout << "An Error Occur at line: " << line_number << " file: " << file_name << endl;
	while (1);
}

#define CIPHER_RANGE 11  // [0 - 10]

/* Test-case for cipher function */
void cipher_test (void)
{
	int cipher_index[CIPHER_RANGE][CIPHER_RANGE];
	int check_value;

	for (int a = 0; a < CIPHER_RANGE; a ++)
	{
		for (int b = 0; b < CIPHER_RANGE; b ++)
		{
			check_value = cipher_index[a][b] = cipher (a, b);
			cout << "cipher_index " << a << "," << b << " = " << cipher_index[a][b] << endl;

			for (int x = 0; x <= a; x ++)
			{
				for (int y = 0; y < b; y ++)
				{
					if (check_value == cipher_index[x][y])
					{
						cout << "WARNING!!!" << endl;
						cout << "cipher index " << a << "," << b << "=" << x << "," << y << endl;
						cout << "cipher value " << check_value << endl;
						return;
					}
				}
			}
		}
	}
}
