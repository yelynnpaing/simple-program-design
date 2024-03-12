/*
	Solution Algorithm
	------------------
	Calculate_7_time_table
		set result to zero
		DO number 1 to 12
			result = 7 * number
			Print 7 x number = result
		ENDDO
	END
*/
/* ---------------------------------------- */
//C++ code
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, result;
	for(i=1; i<=12; i++)
	{
		result = 7 * i;
		cout << "\n7 x " << i << " = " << result;
	}
	getch();
}