/*
	Solution Algorithm
	---------------------
	Calculate_bank_account_balance
		Read bank_record
		DOWHILE cheque_amount != zero
			Print bank_account_number, opening_balance
			new_balance = opening_balance - cheque_amount
			Print new_balance, cheque_amount
		ENDDO
		closing_balance = new_balance
		Print closing_balance
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
	int bank_acc_number;
	float opening_balance, new_balance, closing_balance, cheque_amount;
	cout << "\nEnter bank account number : ";
	cin >> bank_acc_number;
	cout << "\nEnter Opnening bank account balance : ";
	cin >> opening_balance;
	cout << "Enter cheque amount : ";
	cin >> cheque_amount;
	while(cheque_amount != 0)
	{
		new_balance = opening_balance -= cheque_amount;
		cout << "\nnew balance : " << new_balance << endl;
		cout << "\nEnter cheque amount : ";
		cin >> cheque_amount;
	}
	closing_balance = new_balance;
	cout << "\nclosing balance  : " << closing_balance;
	getch();
}