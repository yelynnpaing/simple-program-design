/*
	Solution Algorithm
	---------------------
	Changing_12_hours_format
		Repeat
			Prompt 24_hours_time
			Get 24_hours_time
			IF (24_hours_time > 1200) THEN
				12_hours_time = 24_hours_time - 1200
			ELSE
				12_hours_time = 24_hours_time
			ENDIF
			Display 12_hours_time
		UNTIL 24_hours_time = 9999
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
	int tf_format, t_format;
	do{
		cout << "\nEnter a time with 24 hours format (eg. 2300) : ";
		cin >> tf_format;
		if(tf_format != 9999)
		{
			if(tf_format > 1200)
			{
				t_format = tf_format - 1200;
				if(t_format < 1000)
					cout << "\n12 hours format : " << "0" << t_format << " Pm" << endl;
				else
					cout << "\n12 hours format : " << t_format << " Pm" << endl;
			}else{
				t_format = tf_format;
				cout << "\n12 hours format : " << t_format << " Am" << endl;
			}
		}else{
			 cout << "\nProgram is end.";
		}
	}while(tf_format != 9999);
	getch();
}