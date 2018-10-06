#include <iostream>
#include "stdio.h"

#define MAX_ENTRIES  10.0
#define HIGHES_MARKS 100
#define LOWEST_MARKS 0

using namespace std;

int main()
{
	int marks, min_marks, max_marks, sum;
	float avg_marks;

	min_marks = HIGHES_MARKS;
	max_marks = LOWEST_MARKS;
	sum = 0;

	for (int student_entry = 0; student_entry < MAX_ENTRIES; student_entry ++)
	{
		printf ("Enter the marks of student %d ", (student_entry + 1));
		cin >> marks;

		while (marks > HIGHES_MARKS || marks < LOWEST_MARKS)
		{
			cout << "Invalid entry!! Enter again ";
			cin >> marks;
		}

		max_marks = (marks > max_marks) ? marks : max_marks;
		min_marks = (marks < min_marks) ? marks : min_marks;

		sum += marks;
	}

	avg_marks = (sum / MAX_ENTRIES);

	cout << endl << "--------------------------" << endl;
	cout << "Max marks : " << max_marks << endl;
	cout << "Min marks : " << min_marks << endl;
	cout << "Average marks : " << avg_marks << endl;

	return 0;
}
