/*
	Solution Algorithm
	------------------
	Calculate_first_20_number
		set square to zero
		set cube to zero
		DO number 1 to 20            l
			square = number * number
			cube = number * number * number
			Print number, square, cube
		ENDDO
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
	int i, square, cube;
	cout << "\nNumber" << "\t" << "Square" << "\t" << "Cube" << endl;
	for(i=1; i<=20; i++)
	{
		square = i * i;
		cube = i * i * i;
		cout << i << "\t" << square << "\t" << cube << endl;
	}
	getch();
}