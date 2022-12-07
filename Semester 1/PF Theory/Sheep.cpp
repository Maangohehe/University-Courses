#include <stdio.h>
// To use time library of C


int main()
{int CornA, CornB, CornC;
int Hunger= 0;
printf("What is the weight of CornA?");
scanf("%d", &CornA);
if (CornA>Hunger)
printf("\nThe sheep picked up the bigger corn.\nThe sheep continues to explore the meadow to find the bigger corn.");
else
{printf("The sheep continues to search the meadow to find the bigger corn.");
}
// The sheep explores the meadow and finds another ear.
{printf("what is the weight of CornB?");
scanf("%d", &CornB);
}
if(CornB>CornA)
{printf("\nThe sheep picks up the bigger ear after dropping the smaller ear.");
}
else
{printf("\nThe sheep continues to explore the meadow.");
}
return 0;
}
