/*
	Solution Algorithm
	------------------
	Calculate tax_payable
		Read taxable_income
		IF taxable_income <= 4461.99 THEN
			tax_payable = 0
		ELSE
			IF taxable_income <= 17893.99 THEN
				tax_payable = 0 + ((taxable_income - 4462.00) * 0.3)
			ELSE
				IF taxable_income <= 29499.99 THEN
					tax_payable = 4119.00 + ((taxable_income - 17894.00) * 0.35)
				ELSE
					IF taxable_income <= 45797.99 THEN
						tax_payable = 8656.00 + ((taxable_income - 29500.00) * 0.46)
					ELSE
						IF taxable_income >= 45788.00 THEN
							tax_payable = 11179.00 + ((taxable_income - 45788.00) * 0.6)
						ENDIF

					ENDIF
				ENDIF
			ENDIF
		ENDIF

	END
	Print tax_payable
*/
/* ------------------------------------------------------------------------------- ------------------------------ */
/*
	C++
	----
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float income, tax_payable;
	cout << "\nEnter income : ";
	cin >> income;
	if(income <= 4461.99)
		tax_payable = 0;
	else if(income <= 17893.99)
		tax_payable = 0 + ((income - 4462.00) * 0.3);
	else if(income <= 29499.99)
		tax_payable = 4199.00 + ((income  - 17894.00) * 0.35);
	else if(income <= 45787.99)
		tax_payable = 8656.00 + ((income - 29500.00) * 0.46);
	else if(income >= 45788.00)
		tax_payable = 11179.00 + ((income - 45788.00) * 0.6);
	cout << "\nTax payable : $" << tax_payable;
	getch();
}