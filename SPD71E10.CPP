/*
	Solution Algorithm
	------------------
	Calculate_cake_thickness_and_diameter
		Set total_thickness to zero
		Set total_diameter to zero
		Set total_cake to zero
		Set mini_thickness to 99
		Set max_thickness to 0
		Set mini_diameter to 99
		Set max_diameter to 0
		Read pancake_file
		DOWHILE cake_record != 99
			IF(cake_thickness < 99) THEN
				mini_thickness = cake_thickness
			ENDIF
			IF(cake_thickness > 0) THEN
				max_thickness = cake_thickness
			ENDIF

			IF(cake_daimeter < 99) THEN
				mini_daimeter = cake_diameter
			ENDIF
			IF(cake_diameter > 0) THEN
				max_diameter = cake_diameter
			ENDIF

			Add cake_thickness to total_thickness
			Add cake_diameter to total_diameter
			Add 1 to total_cake

			Read cake_record
		ENDDO
		average_thickness = total_thickness / total_cake
		average_diameter = total_diameter / total_cake
		Print mini_thickness, max_thickness, average_thickness,
		mini_diameter, max_diameter, average_diameter
	END
*/

/* ----------------------------------------------- */

/*
	C++
	----
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int min_thick = 99, max_thick = 0, tot_thick = 0,
	min_diameter = 99, max_diameter = 0, tot_diameter = 0,
	thickness, diameter, num_of_cake = 0;
	float avg_thick , avg_diameter;
	cout << "\nEnter cake thickness(mm) : ";
	cin >> thickness;
	cout << "\nEnter cake diameter(cm) : ";
	cin >> diameter;
	while(thickness != 99 && diameter != 99)
	{
		if(thickness < min_thick)
			min_thick = thickness;
		       //	cout << min_thick << endl;
		if(thickness > max_thick)
			max_thick = thickness;
		       //	cout << max_thick << endl;
		if(diameter < min_diameter)
			min_diameter = diameter;
		if(diameter > max_diameter)
			max_diameter = diameter;

		tot_thick += thickness;

		tot_diameter += diameter;

		num_of_cake++;

		cout << "\nEnter cake thickness(mm) : " ;
		cin >> thickness;
		cout << "Enter diameter(cm) : ";
		cin >> diameter;
	}

	avg_thick = tot_thick / num_of_cake;
	avg_diameter = tot_diameter / num_of_cake;

	cout << "\nCake minimum thickness : " << min_thick << endl;
	cout << "Cake maximum thickness : " << max_thick << endl;
	cout << "Cake average thickness : " << avg_thick << endl;
	cout << "\nCake minimum diameter : " << min_diameter << endl;
	cout << "Cake maximum diameter : " << max_diameter << endl;
	cout << "Cake average diameter : " << avg_diameter;
	getch();
}