#include <stdio.h>

int main()

{
	float x1, x2, x3, x4, y1, y2, y3, y4; 
    float m1, m2, m3, m4, m5, m6;
	 printf("Enter the co-ordinates of the first point (x1, y1) :  ");
	 scanf("%d%d", &x1, &y1);
	 printf("Enter the co-ordinates of the first point (x2, y2) :  ");
	 scanf("%d%d", &x2, &y2);
	 printf("Enter the co-ordinates of the first point (x3, y3) :  ");
	 scanf("%d%d", &x3, &y3);
	 printf("Enter the co-ordinates of the first point (x4, y4) :  ");
	 scanf("%d%d", &x4, &y4);
	 
	 m1=(x2-x1)/(y2-y1);
	 m2=(x3-x1)/(y3-y1);
	 m3=(x4-x1)/(y4-y1);
	 m4=x4-x2/y4-y2;
	// m5=x4-x3/y4-y3;
	// m6=x3-x2/y3/y2;
	 
	if(m1==m2&&m1==m3||m1==m3&&m1==m4||m1==m2&&m1==m4||m2==m3&&m2==m4||m3==m4&&m3==m1)
	{
		printf("It is a straight line!");
	}
	else{
		printf("It is not a straight line.");
	}
}
