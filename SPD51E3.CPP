/*
	Solution Algorithm
	------------------
	Calculate_match_letter_grade
		Prompt student_number
		Get student_number
		Prompt exam_score
		Get exam_score
		IF(exam_score >= 90) THEN
			assign_grade = "A"
		ELSE
			IF(exam_score >= 80) THEN
				assign_grade = "B"
			ELSE
				IF(exam_score >= 70) THEN
					assign_grad = "C"
				ELSE
					IF(exam_score >= 60) THEN
						assign_grade = "D"
					ELSE
						assign_grade = "F"
					ENDIF
				ENDIF
			ENDIF
		ENDIF
		Print assign_grade
	END
*/
/* ----------------------------------------------------------- */
/*
	C++
	---
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int std_num, exam_score;
	char assign_grade;
	cout << "\nEnter a student number : ";
	cin >> std_num;
	cout << "Enter exam score : ";
	cin >> exam_score;
	if(exam_score >= 90)
		assign_grade = 'A';
	else if(exam_score >= 80)
		assign_grade = 'B';
	else if(exam_score >= 70)
		assign_grade = 'C';
	else if(exam_score >= 60)
		assign_grade = 'D';
	else if(exam_score < 60)
		assign_grade = 'F';

	cout << "\nGrade : " << assign_grade;
	getch();
}