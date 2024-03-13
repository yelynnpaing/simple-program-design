/*
	Solution Algorithm
	------------------
	Calculate_discount_rate
		Prompt for price
		Get price
		Prompt for code
		Get code
		CASE OF code
			H : discount = price * 0.5
			F : discount = price * 0.4
			T : discount = price * 0.33
			Q : discount = price * 0.25
			Z : discount = price * 0
				Print No discount
			default : Print invalid pricing code
		ENDCASE
		new_price = price - discount
		Print price, discount, new_price
	END
*/
/* --------------------------------------------------- */
/*
	C++
	---
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int price;
	char code;
	float discount, new_price;
	cout << "\nEnter a price : ";
	cin >> price;
	cout << "Enter code (use...  H,F,T,Q,Z...) : ";
	cin >> code;
	switch(code){
	case 'H' :
		 	 discount = price * 0.5;
		 	 break;
	case 'F' :
		 	 discount = price * 0.4;
		 	 break;
	case 'T' :
		 	 discount = price * 0.33;
		 	 break;
	case 'Q' :
			 discount = price * 0.25;
			 break;
	case 'Z' :
			 discount = price * 0;
			 cout << "\n No discount." << endl;
	default  :
			 cout << "\nInvalid pricing code." << endl;
	}
	new_price = price - discount;
	cout << "\nPrice : " << price << endl;
	if(code == 'H' || code == 'F' || code == 'T' || code == 'Q' || code == 'Z'){
		cout << "discount : " << discount << endl;
	}
	cout << "new price : " << new_price;
	getch();
}