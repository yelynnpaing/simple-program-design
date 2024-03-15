/*
	Solution Algorithm
	------------------
	Calculate_account_final_balance
		Read begining_acc_balance
		Read total_withdrawl
		Read total_deposit
		new_balance = (begining_acc_balance - total_withdrawl) + total_deposit
		federal_tax = 0.01 * (total_withdrawl + total_deposit)
		final_acc_balance = new_balance - federal_tax
		Print final_acc_balance
	END
*/
/* ------------------------------------------------------------ */
/*
	C++
	---
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float begin_acc_balance, total_withdrawl, total_deposit, new_balance,
	federal_tax, final_acc_balance;
	cout << "\nEnter begining bank account balance : ";
	cin >> begin_acc_balance;
	cout << "Enter total withdrawls : ";
	cin >> total_withdrawl;
	cout << "Enter total deposit : ";
	cin >> total_deposit;

	new_balance = (begin_acc_balance - total_withdrawl) + total_deposit;
	federal_tax = 0.01 * (total_withdrawl + total_deposit);
	final_acc_balance = new_balance - federal_tax;

	cout << "\nFinal end of the month balance : " << final_acc_balance;
	getch();
}