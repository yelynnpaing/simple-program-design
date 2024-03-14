/*
	Solution Algorithm
	------------------
	Calculate_comission
		Read transition_record_file
		CASE OF code
			S : comission = retail_price * 0.05
			M : comission = retail_price * 0.07
			L : comission = retail_price * 0.1
		ENDCASE
		Print retail_price, comission, employee_number
	END
*/
/* ------------------------------------------------------------- */
/*
	C++
	---
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char code;
	int retail_price, emp_no;
	float comission;
	cout << "\nEnter employee number : ";
	cin >> emp_no;
	cout << "Enter retail price : ";
	cin >> retail_price;
	cout << "Enter code (use... S, M, L) : ";
	cin >> code;
	switch(code)
	{
		case 'S' :
			 comission = retail_price * 0.05;
			 break;
		case 'M' :
			 comission = retail_price * 0.07;
			 break;
		case 'L' :
			 comission = retail_price * 0.1;
			 break;
		default  :
			 cout << "\nWrong code!";
	}
	cout << "\nretail price : " << retail_price << endl;
	if(code == 'S' || code == 'M' || code == 'L')
		cout << "comission : " << comission << endl;
	cout << "employee number : " << emp_no;
	getch();
}