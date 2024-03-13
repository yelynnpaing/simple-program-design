/*
	Solution Algorithm
	-------------------
	Calculate_deli_charges
		Prompt parcel_weight
		Get parcel_weight
		IF parcel_weight <= 2.5 THEN
			deli_charges = parcel_weight * 3.50
		ELSE
			IF parcel_weight <= 5 THEN
				deli_charges = parcel_weight * 2.85
			ELSE
				deli_charges = parcel_weight * 2.45
			ENDIF
		ENDIF
		Print deli_charges
	END
*/
/* ------------------------------------------------------------- */
/*
	C++
	----
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float parcel_weight, deli_charges;
	cout << "\nEnter percel weight : ";
	cin >> parcel_weight;
	if(parcel_weight <= 2.5)
		deli_charges = parcel_weight * 3.50;
	else if(parcel_weight <= 5)
		deli_charges = parcel_weight * 2.85;
	else if(parcel_weight > 5)
		deli_charges = parcel_weight * 2.45;
	cout << "\nDelivery charges : $" << deli_charges;
	getch();
}