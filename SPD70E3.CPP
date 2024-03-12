/*
	Solution Algorithm
	---------------------
	Calculate_total_payroll
		Set total_payroll to zero
		Prompt payroll
		Get payroll
		DOWHILE payroll != 999
			Add total_payroll to payroll
			Promt payroll
			Get payroll
		ENDDO
		Display total_payroll
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
	int payroll, total_payroll=0;
	cout << "\nEnter a payroll : ";
	cin >> payroll;
	while(payroll != 999)
	{
		total_payroll += payroll;
		cout << "\nEnter a payroll : ";
		cin >> payroll;
	}
	cout << "\nTotal Payroll : " << total_payroll;
	getch();

}