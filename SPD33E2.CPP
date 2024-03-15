/*
	Solution Algorithm
	------------------
	Calculate_result
		Prompt int1, int2
		Get int1, int2
		sum = int1 + int2
		difference = int1 - int2
		product = int1 * int2
		quotient = int1 / int2
		Display sum, difference, product, quotient
	END
*/
/* ------------------------------------------------------- */
/*
	C++
	----
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int int1, int2, sum, diff, product, quotient;
	cout << "\nEnter integer1 : ";
	cin >> int1;
	cout << "\nEnter integer2 : ";
	cin >> int2;
	sum = int1 + int2;
	diff = int1 - int2;
	product =  int1 * int2;
	if(int2 !=0)
		quotient = int1 / int2;
	else
		cout << "\ninteger2 = 0. So quotient does not exist.";

	cout << "\nsum : " << sum << endl;
	cout << "difference : " << diff << endl;
	cout << "product : " << product << endl;
	if(int2 != 0)
		cout << "quotient : " << quotient ;
	getch();
}