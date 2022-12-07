#include <stdio.h>

int main(void)

{
	float gpa, gpa1, gpa2, gpa3, gpa4, gpa5, cgpa, sgpa, totalgpa;
	char grade;
	int crdt, crdt2, crdt3, crdt4, crdt5, totalcrdt=100, obtainedcrdt;
	
	printf("What is the GPA of couse 1: ");
	scanf("%f", &gpa1);
	printf("What is the GPA of course 2: ");
	scanf("%f", &gpa2);
	printf("What is the GPA of course 3: ");
	scanf("%f", &gpa3);
	printf("What is the GPA of course 4: ");
	scanf("%f", &gpa4);
	printf("What is the GPA of course 5: ");
	scanf("%f", &gpa5);
	printf("Input your total credit hours of course 1: ");
	scanf("%d", &crdt);
	printf("Input your total credit hours of course 2: ");
	scanf("%d", &crdt2);
	printf("Input your total credit hours of course 3: ");
	scanf("%d", &crdt3);
	printf("Input your total credit hours of course 4: ");
	scanf("%d", &crdt4);
	printf("Input your total credit hours of course 5: ");
	scanf("%d", &crdt5);
	
	totalgpa=gpa1+gpa2+gpa3+gpa4+gpa5;
		obtainedcrdt=crdt+crdt2+crdt3+crdt4+crdt5;
		sgpa=totalgpa*obtainedcrdt/totalcrdt;
		
	if(sgpa>4||cgpa>20||obtainedcrdt>20)
	{
		
		printf("GPA, CPGA and credit hours cannot be above 4.00. Run the program again.");
		
	}
	else
	{
		printf("SGPA is %.2f\n", sgpa);
	}

	if(sgpa==4)
	{
		printf("A Grade.\n");
	}
	else if(sgpa<4&&sgpa>=3.67)
	{
		printf("Grade: A-\n");
	}
	else if(sgpa<3.67&&sgpa>=3.33)
	{
		printf("Grade: B+");
	}
	else if(sgpa<3.33&&sgpa>=3.00)
	{
		printf("Grade: B");
	}
	else if(sgpa<3.00&&sgpa>=2.67)
	{
		printf("Grade: B-");
	}
	else if(sgpa<2.67&&sgpa>=2.33)
	{
		printf("Grade: C+");
	}
	else if(sgpa<2.33&&sgpa>=2.00)
	{
		printf("Grade: C");
	}
	else if(sgpa<2.00&&sgpa>=1.67)
	{
		printf("Grade: C-");
	}
	else if(sgpa<1.67&&sgpa>=1.33)
	{
		printf("Grade: D+");
	}
	else if(sgpa<1.33&&sgpa>=1.00)
	{
		printf("Grade: D-");
	}
	else if(sgpa<1.00)
	{
		printf("Grade: F");
	}
	
	return 0;
}
