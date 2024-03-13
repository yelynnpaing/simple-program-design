/*
	Solution Algorithm
	------------------
	Calculate_payroll_amount
		set total_payroll_amount to zero
		set total_employee to zero
		Read employee_time_cards
		DOWHILE employee_time_cards exist
			regular_pay = regular_worked_hour * wage_rate
			overtime_pay = working_hour - 35 * wage_rate * 1.5
			net_pay = (regular_pay + overtime_pay) - 15%
			Display employee_no, net_pay
			Add net_pay to total_payroll_amount
			Add 1 to total_employee
			Read employee_time_cards
		ENDDO
		average_paid = total_payroll_amount / total_employee
		Display total_payroll_amount, average_paid
	END
*/
/* -------------------------------------------------------------------- */
/*
	C++
	----
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float total_payroll=0, average_payroll, tax, net_pay;
	int emp_no, worked_hour, wage_rate, regular_pay, overtime_pay,
	total_employee=0, regular_hour, overtime_hour;
	cout << "\nEnter employee number : ";
	cin >> emp_no;
	if(emp_no != 0){
		cout << "Enter worked hours : ";
		cin >> worked_hour;
		if(worked_hour <= 35){
			regular_hour = worked_hour;
			overtime_hour = 0;
			cout << "regular hour : " << regular_hour << endl;
			cout << "overtime hour : " << overtime_hour << endl;
		}else{
			regular_hour = 35;
			overtime_hour = worked_hour - 35;
			cout << "regular hour : " << regular_hour << endl;
			cout << "overtime hour : " << overtime_hour << endl;
		}
		cout << "\nEnter wage rate : ";
		cin >> wage_rate;
		while(emp_no !=0)
		{
			regular_pay = regular_hour * wage_rate;
			overtime_pay = overtime_hour * wage_rate * 1.5;
			tax = ( regular_pay + overtime_pay ) * 0.15;
			net_pay = (regular_pay + overtime_pay) - tax;
			cout << "\nEmployee number : " << emp_no << endl;
			cout << "Net pay : " << net_pay << endl;

			total_payroll += net_pay;
			total_employee++;

			cout << "\nEnter employee number : ";
			cin >> emp_no;
			if(emp_no != 0){
				cout << "Enter worked hours : ";
				cin >> worked_hour;
				if(worked_hour <= 35){
					regular_hour = worked_hour;
					overtime_hour = 0;
					cout << "regular hour : " << regular_hour << endl;
					cout << "overtime hour : " << overtime_hour << endl;
				}else{
					regular_hour = 35;
					overtime_hour = worked_hour - 35;
					cout << "regular hour : " << regular_hour << endl;
					cout << "overtime hour : " << overtime_hour << endl;
				}
				cout << "\nEnter wage rate : ";
				cin >> wage_rate;
			}
		}

		average_payroll = total_payroll / total_employee;
		cout << "\nTotal payroll : " << total_payroll << endl;
		cout << "Average payroll : " << average_payroll;
	}else{
		cout << "\nthere is no employee timecards!.";
	}

	getch();
}