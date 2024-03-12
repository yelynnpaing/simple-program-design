/*
	Solution Algorithm
	------------------
	Calculate_sum_and_average
		Set sum to zero
		Read series of intergers
		DO integer to first_integer-1
			Prompt integer
			Get integer
			Add sum to integer
		ENDDO
		average = sum / first_integer
		Display first_integer, sum, average
	END
*/
/* ---------------------------------------- */

/*
	C++
	----
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int first_int, sum=0, average;
	cout << "\nEnter a number : ";
	cin >> first_int;
	for(int i=1; i<first_int; i++)
	{
		sum += i;
	}
	average = sum / first_int;
	cout << "\nSum : " << sum << endl;
	cout << "Average : " << average;
	getch();
}