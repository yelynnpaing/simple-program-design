/*
	Solution Algorithm
	------------------
	Calculate_weekly_pay
		Read employee_time_sheet
		regular_pay = wage_rate * regular_worked_hours
		overtime_pay = wage_rate * overtime_worked_hours * 1.5
		weekly_pay = regular_pay + overtime_pay
		Print weekly_pay
	END
*/
/* ----------------------------------------------------------------- */
/*
	C++
	----
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float regular_worked_hour, overtime_worked_hour, wage_rate, regular_pay,
	overtime_pay, weekly_pay;
	cout << "\nEnter total number of regular worked hours : ";
	cin >> regular_worked_hour;
	cout << "Enter total number of overtime worked hours : ";
	cin >> overtime_worked_hour;
	cout << "Enter wage rate (1 hour pay rate) : ";
	cin >> wage_rate;

	regular_pay = regular_worked_hour * wage_rate;
	overtime_pay = overtime_worked_hour * wage_rate * 1.5;
	weekly_pay = regular_pay + overtime_pay;

	cout << "\weekly pay for employee : " << weekly_pay;
	getch();
}