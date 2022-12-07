#include <stdio.h>

int main()
{
	int choice;
	int choice2;
	
	printf("Would you like to find the subordinated of Thomas Edison? (1/0).\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
		printf("The subordinates of Thomas Edison are\n 1. Marie Curie\n 2. Blaise Pascal\n 3. Isaac Newton.\n");
		printf("Input the number with respect to the scientists to find his/her subordinates.\nInput: ");
		scanf("%d", &choice2);
		switch(choice2)
		{
			case 1:
				printf("The subordinates of Marie Curie are:\n 1. Will Thomson.\n 2. Carl Gauss.\n");
				printf("Input the number of the respective scientist to find his subbordinates.\nInput: ");
				scanf("%d", &choice2);
				switch(choice2)
				{
				case 1:
                    printf("There are 3 employees working for Will Thomson\n");

					break;
                case 2:
                    printf("There are 3 employees working for Carl Gauss\n");
				break;

                }
			case 2:
			printf("The subordinate of Blaise Pascal is:\n 1. James Watt\n");
			printf("Input 1 to display the subordinates of James Watt\nInput: ");
			scanf("%d", &choice2);
				switch(choice2)
				{
				  case 1:
				    printf("2 employees under James Watt.\n");
                    break;

                }
                break;

            case 3:
            {
                      printf("There are 2 subornates of Isaac Newton:\n1) Maxwell Clerk.\n2) Paul Dirac.\n");
                      printf("Input the respective number to display the subordinates of Maxwell and Paul.\nInput: ");
                      scanf("%d", &choice2);
					   switch (choice2)
                          {
                              case 1:
                                  printf("There are 3 employees working for Maxwell Clark.\n");
                                  break;
                              case 2:
                                  printf("There are 3 employees working for Paul Dirac.\n");
                                  break;

                          }
		                }
		break;

		
		
	}
	
}
}

