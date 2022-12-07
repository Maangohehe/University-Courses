#include <stdio.h>
float report(float std_marks[], char std_names[], int roll_no[]);
int main()
{
	int i, data[7], roll_no[7];
	char std_names[7];
	float std_marks[7];
	report(roll_no,std_names,std_marks);
	
}

float report(float std_marks[], char std_names[], int roll_no[])
{
	int i;
	
	for(i=0; i<7; i++)
	{
		printf("Input the roll number: ");
		scanf("%d", &roll_no[i]);
		printf("Input the name: ");
		scanf("%s", &std_names[i]);
		printf("Input the marks: ");
		scanf("%f", &std_marks[i]);
	}
}
