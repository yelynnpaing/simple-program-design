/*
	Solution Algorithm
	------------------
	Calculate_deposit
		Read loan_amount
		IF loan_amount <= 25000 THEN
			deposit = loan_amount * 0.05
		ELSE
			IF loan_amount <= 49999 THEN
				deposit = (1250 + (loan_amount - 25000) * 0.1)
			ELSE
				IF loan_amount <= 100000
					deposit = (5000 + (loan_amount - 50000) * 0.25)
				ELSE
					error message
				ENDIF
			ENDIF
		ENDIF
		Print deposit
	END
*/
/* ------------------------------------------------------------ */
/*
	C++
	----
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double loan_amount, deposit;
	cout << "\nEnter home loan amount : ";
	cin >> loan_amount;
	if(loan_amount <= 25000)
		deposit = loan_amount * 0.05;
	else if(loan_amount <= 49999)
		deposit = (1250 + (loan_amount - 25000) * 0.1);
	else if(loan_amount <= 100000)
		deposit = (5000 + (loan_amount - 50000) * 0.25);
	else
		cout << "\nLoan amount over $100000 are not allowed.";
	if(loan_amount <= 100000)
		cout << "\ndeposit : $" << deposit;
	getch();
}