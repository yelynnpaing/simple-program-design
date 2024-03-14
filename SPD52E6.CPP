/*
	Solution Algorithm
	------------------
	Calculate_architect_fee
		Prompt building_cost
		Get building_cost
		IF building_cost <= 80000 THEN
			architect_fee = 5000 * 0.08 + (building_cost - 5000) * 0.03
		ELSE
			IF building_cost > 80000 THEN
				architect_fee = 5000 * 0.08 + (building_cost - 5000) * 0.25
			ENDIF
		ENDIF
		Display architect_fee
	END
*/
/* -------------------------------------------------- */
/*
	C++
	----
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float building_cost, architect_fee;
	cout << "\nEnter building cost : ";
	cin >> building_cost;
	if(building_cost <= 80000)
		architect_fee = (5000 * 0.08 + (building_cost - 5000) * 0.03);
	else
		architect_fee = (5000 * 0.08 + (building_cost - 5000) * 0.25);

	cout << "\narchitect fee : $" << architect_fee;
	getch();
}