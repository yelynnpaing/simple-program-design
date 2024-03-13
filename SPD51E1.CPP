/*
	Solution Algorithm
	------------------
	Calculate_two_integers
		Get int1, int2
		sum = int1 + int2
		difference = int1 - int2
		product = int1 * int2
		quotient = int1 / int2
		Display sum, difference, product, quotient
	END
*/
/* ---------------------------------------------------- */
/*
	C++
	---
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int int1, int2, sum, difference, product;
	float quotient;
	cout << "\nEnter integer1 : ";
	cin >> int1;
	cout << "Enter integer2 : ";
	cin >> int2;
	sum = int1 + int2;
	difference = int1 - int2;
	product = int1 * int2;
	if(int2 != 0){
		quotient = int1 / int2;
		cout << "quotient : " << quotient;
	}else{
		cout << "\ninteger2 is zero, so quotient does not calculate." << endl;
	}
	cout << "\sum : " << sum << endl;
	cout << "difference : " << difference << endl;
	cout << "product : " << product << endl;
	getch();
}