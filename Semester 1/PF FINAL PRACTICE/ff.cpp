#include <stdio.h>
#include <string.h>
struct reg{
	int crsid;
	char crsname[100]={0};
};

struct student{
	int stdid[100],
	    cell[100];
	char fname[5][100]={{0},{0}},
	     lname[5][100]={{0},{0}},
	     email[5][100]={{0},{0}};
	struct reg uni2;
	     
};

int main()
{
	struct student uni[5];
	int n=5, i;
	for(i=0; i<1; i++)
	{
		printf("Input First Name: ");
		scanf("%s", uni[i].fname);
		printf("Input the Last Name: ");
		scanf("%s", uni[i].lname);
		printf("Email: ");
		scanf("%s", uni[i].email);
		printf("Input the student ID: ");
		scanf("%d", &uni[i].stdid);
		printf("Enter the cell no: ");
		scanf("%d", &uni[i].cell);
	}
	
	for(i=0; i<1; i++)
	{
		printf("Name: %s %s\n", uni[i].fname, uni[i].lname);
		printf("Student ID: %d\n", uni[i].stdid);
		printf("Cell no: %d\n", uni[i].cell);
		printf("Email: %s\n", uni[i].email);
	}
	
}
