/*
	Solution Algorithm
	------------------
	Process_validate_date
		Prompt for date
		Get date
		IF years % 4 == zero THEN
			IF month == 2 THEN
				IF day_range > 0 && day_range <= 29
					Display leap year
					Display validate day
				ELSE
					Display invalid day
				ENDIF
			ENDIF
		ELSE
			IF month == 2 THEN
				IF day_range > 0 && day_range <= 28
					Display not leap year
					Display validate day
				ELSE
					Display invalid day
				ENDIF
			ELSE
				IF day_range > 0 && day_range <= 31 THEN
					Display validate day
				ELSE
					Display invalid day
				ENDIF
			ENDIF
		ENDIF

		IF months > 0 && months <= 12 THEN
			Display valid month
		ELSE
			Display invalid month
		ENDIF
		
		Display date and date format is validate
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
	int day, month, year;
	cout << "\nEnter a date (eg.. day month year) : ";
	cin >> day >> month >> year;
	if(year % 4 == 0)
	{
		if(month == 2)
		{
			if(day > 0 && day <= 29){
				cout << endl << year << " % 4 == 0. So, this is a leap year.";
				cout << endl << day << " is Validate day.";
			}
			else
				cout << endl << day << " is invalid day format.";
		}
		else
		{
			if(day > 0 && day <= 31)
				cout << endl << day << " is Validate day.";
			else
				cout << endl << day << " is invalid day format.";
		}
	}
	else
	{
		if(month == 2){
			if(day > 0 && day <= 28)
				cout << endl << year << " % 4 != 0. So this not a leap year. ";
				cout << endl << day << " is validate day.";
			else
				cout << endl << day << " is invalid day format.";

		}
		else
		{
			if(day > 0 && day <= 31)
				cout << endl << day << " is valid day format.";
			else
				cout << endl << day << " is invalid day format.";
		}
	}

	if(month > 0 && month <= 12)
		cout << endl << month << " is validate month.";
	else
		cout << endl << month << " is invalid month format.";
	getch();
}


