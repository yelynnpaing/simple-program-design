/*
	Solution Algorithm
	------------------
	Calculate_employee_earning
	1 set total_gross_earnings to zero
	2 set total_tax to zero
	3 set total_medical_levy to zero
	4 set total_net_earnings to zero
	5 Read employee_record_file
	6 DOWHILE  employee_record_file is exist
	 {
		gross_earning = worked_hour * pay_rate;
		Add gross_earnings to total_gross_earning
		tax_payable = gross_earning * 0.15;
		Add tax_payable to total_tax_payable;
		medical_levy = gross_earning * 0.01;
		Add medical_levy to total_medical_levy;
		net_earning = gross_earning - (tax_payable + medical_levy);
		Add net_earning to total_net_earning;
	15	Print gross_earning, tax_payable, medical_levy, net_earning
	16	Read employee_record_file
	}
	17 Print total_gross_earning, total_tax_payable,
	   total_medical_levy, total_net_earning
	END
*/
/* --------------------------------------------------------------------- */


/*
	C++
	----
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int emp_no, worked_hour, pay_rate, gross_earning,
	total_gross_earning=0;
	float tax_payable, medical_levy, net_earning, total_net_earning=0,
	total_tax_payable=0, total_medical_levy=0;
	cout << "\nEnter Employee number : ";
	cin >> emp_no;
	while(emp_no != 0)
	{
		cout << "Enter employee worked hours : ";
		cin >> worked_hour;
		cout << "Enter pay rate : ";
		cin >> pay_rate;

		gross_earning = worked_hour * pay_rate;
		total_gross_earning += gross_earning;
		tax_payable = gross_earning * 0.15;
		total_tax_payable += tax_payable;
		medical_levy = gross_earning * 0.01;
		total_medical_levy += medical_levy;
		net_earning = gross_earning - (tax_payable + medical_levy);
		total_net_earning += net_earning;

		cout << "\nEmployee number : " << emp_no << " details" << endl;
		cout << "----------------------------------------";
		cout << "\ngross earning : " << gross_earning << endl;
		cout << "tax payable : " << tax_payable << endl;
		cout << "medical levy : " << medical_levy << endl;
		cout << "net earning : " << net_earning << endl;

		cout << "\nEnter employee number : ";
		cin >> emp_no;
	}

	cout <<  "\nTotal gross earnings : " << total_gross_earning << endl;
	cout << "Total tax : " << total_tax_payable << endl;
	cout << "Total medical levy : " << medical_levy << endl;
	cout << "Total net earnings : " << total_net_earning;
	getch();
}
