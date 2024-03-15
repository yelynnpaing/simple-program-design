/*
	Solution Algorithm
	------------------
	Caculate_final_number
		Prompt integer
		Get integer
		final_integer = ((integer + 5) * 2) - 7
		Display final_number
	END
*/
/* ------------------------------------------------ */
/*
	C++
	---
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int int1, final_integer;
	cout << "\nEnter a integer : ";
	cin >> int1;
	final_integer = ((int1 + 5) * 2) - 7;
	cout << "\nfinal number : " << final_integer;
	getch();
}