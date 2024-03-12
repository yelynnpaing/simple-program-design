/*
	Solution Algorithm
	------------------
	Calculate_payroll
		set total_payroll_amount to zero
		Read employee_record_file
		DOWILE employee_record_file exist
			regular_pay = regular_worked_hours * hourly_pay_rate
			overtime_pay = overtime_worked_hours * hourly_pay_rate * 1.5
			total_pay = regular_pay + overtime_pay
			Print employee_no, employee_name, hourly_pay_rate,
			regular_worked_hours, overtime_worked_hours, total_pay
			Add total_payroll to total_payroll_amount
			Read employee_record_file
		ENDDO
		Print total_payroll_amount
	END
*/
/* ---------------------------------------- */

/*
	C++
	---
*/
#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int emp_no, r_worked_hour, o_worked_hour, pay_rate, r_pay, o_pay,
	total_pay, total_payroll_amount=0;
	//string emp_name;
	cout << "\nEnter employee number : ";
	cin >> emp_no;
	if(emp_no != 0){
	//cout << "Enter employee name : ";
	//getline(cin, emp_name);
	cout << "Enter regular worked hours : ";
	cin >> r_worked_hour;
	cout << "Enter overtime worked hours : ";
	cin >> o_worked_hour;
	cout << "Enter hourly pay rate : ";
	cin >> pay_rate;
	while(emp_no != 0)
	{
		r_pay = r_worked_hour * pay_rate;
		o_pay = o_worked_hour * pay_rate * 1.5;
		total_pay = r_pay + o_pay;
		cout << "\ntotal Pay : " << total_pay << endl;
		total_payroll_amount += total_pay;

		cout << "\nEnter employee number : ";
		cin >> emp_no;
		if(emp_no != 0)
		{
			//cout << "Enter employee name : ";
			//getline(cin, emp_name);
			cout << "Enter regular worked hours : ";
			cin >> r_worked_hour;
			cout << "Enter overtime worked hours : ";
			cin >> o_worked_hour;
			cout << "Enter hourly pay rate : ";
			cin >> pay_rate;
		}
	}
	cout << "\nTotal payroll amount : " << total_payroll_amount << endl;
	}else{
		cout << "\nNo employee record does not exist!" << endl;
	}
	getch();
}