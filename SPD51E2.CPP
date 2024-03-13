/*
	Solution Algorithm
	------------------
	Calculate_two_numbers
		Read num1, num2
		Read int_code
		CASE OF int_code
			1 : result = num1 + num2
			2 : result = num1 - num2
			3 : result = num1 * num2
			4 : result = num1 / num2
			default : error_message
		ENDCASE
		Display num1, num2, result
	END
*/
/* ---------------------------------------- */
/*
	C++
	----
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num1, num2, int_code;
	float result;
	cout << "\nEnter first number : ";
	cin >> num1;
	cout << "Enter second number (not use 0) : ";
	cin >> num2;
	cout << "Enter integer code (use... 1,2,3,4, ...) : ";
	cin >> int_code;
	switch(int_code)
	{
		case 1 :
				result = num1 + num2;
				break;
		case 2 :
				result = num1 - num2;
				break;
		case 3 :
				result = num1 * num2;
				break;
		case 4 :
				result = num1 / num2;
				break;
		default:
				cout << "\nWrong integer code....!";
	}
	cout << "\nfirst num : " << num1 << endl;
	cout << "second num : " << num2 << endl;
	if(int_code == 1 || int_code == 2 || int_code == 3 || int_code == 4)
		cout << "result : " << result;
	getch();
}