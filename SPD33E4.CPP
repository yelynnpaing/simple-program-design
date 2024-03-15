/*
	Solution Algorithm
	------------------
	Calculate_tax_payable
		Read tax_rate
		Read price1, price2, price3, price4, price5
		total_price = price1 + price2 + price3 + price4 + price5
		tax_payable = tax_rate * total_price
		Print total_price, tax_payable;
	END
*/
/* ---------------------------------------------------------------- */
/*
	C++
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int p1, p2, p3, p4, p5, total_price;
	float tax_rate, tax, tax_payable;
	cout << "\nEnter a tax rate (eg. 1 to 100) % : ";
	cin >> tax_rate;
	tax = tax_rate / 100;
	cout << "\nEnter prices of five items : ";
	cin >> p1 >> p2 >> p3 >> p4 >> p5;
	total_price = p1 + p2 + p3 + p4 + p5;
	tax_payable = total_price * tax;
	cout << "\ntotal prices : " << total_price << endl;
	cout << "tax payable : " << tax_payable;
	getch();
}