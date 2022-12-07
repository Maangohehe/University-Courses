// Before running this program; Line 1 is opposite to line 3 and line 2 is opposite to line 4 of quadrilateral.

#include <stdio.h>

int main(void)
{
	float length1, length2, length3, length4, angle1, angle2, angle3, angle4;
// Square has 4 equal sides and all 4 angles of 90 degree.
// Rectangle has 4 sides. Two length equal and 2 width equal. Angles of rectangle is 90 degree.
// Rhombus has 4 equal length and the total of interior angle is equal to 360 degree.
// A kite has 2 pairs of equal lengths of sides which are adjacent. The total interior angle is 360 degree.
// Parallelogram has 2 equal parallel sides which are opposite to each other.
// Trapezoid has 2 parallel sides. Interior angle is 360 Degree.

    
    printf("What is the length of first side of your quadrilateral? = ");
    scanf("%f", &length1);
      printf("What is the length of second side of your quadrilateral? = ");
    scanf("%f", &length2);
      printf("What is the length of third side of your quadrilateral? = ");
    scanf("%f", &length3);
      printf("What is the length of fourth side of your quadrilateral? = ");
    scanf("%f", &length4);
      printf("What is the first angle of the quadreliteral? = ");
    scanf("%f", &angle1);
      printf("What is the second angle of the quadreliteral? = ");
    scanf("%f", &angle2);
      printf("What is the third angle of the quadreliteral? = ");
    scanf("%f", &angle3);
      printf("What is the fourth angle of the quadreliteral? = ");
    scanf("%f", &angle4);
    // A shape cannot be less than 1 cm or 1 mm or 1 micrometer.
    if(length1<1||length2<1||length3<1||length4<1||angle1<1||angle2<1||angle3<1||angle4<1)
    {
    	printf("Error! Run the program again!\n");
	}
	
	// A square has same sides and all angles are 90 degree.
	else if(length1==length2&&length2==length3&&length3==length4&&angle1==90&&angle2==90&&angle3==90&&angle4==90)
	{
	   printf("It is a square\n");
	}
	// A rectangle has same length and same breadth. All angles are 90 degree.
	// In this case length 1 and 3; 2 and 4 should be the same. 
	else if(length1==length3&&length2==length4&&angle1==90&&angle2==90&&angle3==90&&angle4==90)
	{
		printf("It is a rectangle\n");
		
	}
	// A rhombus cannot have a 90 degree angle. If the rhombus has a 90 degree angle it is then a square.
	else if(length1==length2&&length2==length3&&length3==length4&&angle1!=90&&angle2!=90&&angle3!=90&&angle4!=90&&angle1+angle2+angle3+angle4==360)
	{
	
		printf("It is a rhombus.");
	}
	else if(length1==length2&&length3==length4&&angle1+angle2==180&&angle3+angle4==180)
	{
	    printf("It is a quadrilateral Kite.\n");
	}
	
	else if(length1==length3&&angle1==angle3&&angle2!=angle4)
	{
		printf("It is a parallelogram.");
	}
	else if(length1==length3&&angle1+angle2+angle3+angle4==360)
	{
		printf("It is a trapezoid.");
	}
	
    
	

	




}
	


