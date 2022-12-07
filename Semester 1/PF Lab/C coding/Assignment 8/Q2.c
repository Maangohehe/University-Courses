#include <stdio.h>
int main()
{
	int month, day, i, j;
	printf("Input the month: ");
	scanf("%d", &month);
	printf("Input the day: ");
	scanf("%d", &day);
	for(i=0; i<=0; i++)
	{
		switch(month)
		{
			case 1:
				printf("\tJanuary\n\nMonday  Tuesday  Wednesday  Thursday  Friday  Saturday    Sunday\n");
				
				switch(day)
				{
					case 1:
					for(i=1; i<=31; i++)
					{
						printf("%5d    ", i);
						if(i==7 || i==14 || i==21||i==28)
						{
							printf("\n");
						    
						}
					}
					break;
					case 2:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t ");
						}
						printf("%5d    ", i);
						if(i==6 || i==12 || i==18||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 3:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t  ");
						}
						printf("%5d    ", i);
						if(i==5 || i==12 || i==19||i==26)
						{
							printf("\n");
						    
						}
					}
					break;
					case 4:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t   ");
						}
						printf("%5d    ", i);
						if(i==4 || i==11 || i==18||i==25)
						{
							printf("\n");
						    
						}
					}
					break;
					case 5:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t    ");
						}
						printf("%5d    ", i);
						if(i==3 || i==10 || i==17||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 6:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t     ");
						}
						printf("%5d    ", i);
						if(i==2 || i==9 || i==16||i==23||i==30)
						{
							printf("\n");
						    
						}
					}
					break;
					case 7:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t\t      ");
						}
						printf("%5d    ", i);
						if(i==1 || i==8 || i==15||i==22 || i==29)
						{
							printf("\n");
						    
						}
					}
					break;
				
						
				}
				break;
			case 2:
				printf("\tFebruary\n\nMonday  Tuesday  Wednesday  Thursday  Friday  Saturday    Sunday\n");
				
				switch(day)
				{
					case 1:
					for(i=1; i<=28; i++)
					{
						printf("%5d    ", i);
						if(i==7 || i==14 || i==21||i==28)
						{
							printf("\n");
						    
						}
					}
					break;
					case 2:
					for(i=1; i<=28; i++)
					{
						if(i==1)
						{
							printf("\t ");
						}
						printf("%5d    ", i);
						if(i==6 || i==12 || i==18||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 3:
					for(i=1; i<=28; i++)
					{
						if(i==1)
						{
							printf("\t\t  ");
						}
						printf("%5d    ", i);
						if(i==5 || i==12 || i==19||i==26)
						{
							printf("\n");
						    
						}
					}
					break;
					case 4:
					for(i=1; i<=28; i++)
					{
						if(i==1)
						{
							printf("\t\t\t   ");
						}
						printf("%5d    ", i);
						if(i==4 || i==11 || i==18||i==25)
						{
							printf("\n");
						    
						}
					}
					break;
					case 5:
					for(i=1; i<=28; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t    ");
						}
						printf("%5d    ", i);
						if(i==3 || i==10 || i==17||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 6:
					for(i=1; i<=28; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t     ");
						}
						printf("%5d    ", i);
						if(i==2 || i==9 || i==16||i==23||i==30)
						{
							printf("\n");
						    
						}
					}
					break;
					case 7:
					for(i=1; i<=28; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t\t      ");
						}
						printf("%5d    ", i);
						if(i==1 || i==8 || i==15||i==22 || i==29)
						{
							printf("\n");
						    
						}
					}
					break;
				
						
				}
				break;
			case 3:
				printf("\tMarch\n\nMonday  Tuesday  Wednesday  Thursday  Friday  Saturday    Sunday\n");
				
				switch(day)
				{
					case 1:
					for(i=1; i<=31; i++)
					{
						printf("%5d    ", i);
						if(i==7 || i==14 || i==21||i==28)
						{
							printf("\n");
						    
						}
					}
					break;
					case 2:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t ");
						}
						printf("%5d    ", i);
						if(i==6 || i==12 || i==18||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 3:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t  ");
						}
						printf("%5d    ", i);
						if(i==5 || i==12 || i==19||i==26)
						{
							printf("\n");
						    
						}
					}
					break;
					case 4:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t   ");
						}
						printf("%5d    ", i);
						if(i==4 || i==11 || i==18||i==25)
						{
							printf("\n");
						    
						}
					}
					break;
					case 5:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t    ");
						}
						printf("%5d    ", i);
						if(i==3 || i==10 || i==17||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 6:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t     ");
						}
						printf("%5d    ", i);
						if(i==2 || i==9 || i==16||i==23||i==30)
						{
							printf("\n");
						    
						}
					}
					break;
					case 7:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t\t      ");
						}
						printf("%5d    ", i);
						if(i==1 || i==8 || i==15||i==22 || i==29)
						{
							printf("\n");
						    
						}
					}
					break;
				
						
				}
				break;
			case 4:
				printf("\tApril\n\nMonday  Tuesday  Wednesday  Thursday  Friday  Saturday    Sunday\n");
				
				switch(day)
				{
					case 1:
					for(i=1; i<=30; i++)
					{
						printf("%5d    ", i);
						if(i==7 || i==14 || i==21||i==28)
						{
							printf("\n");
						    
						}
					}
					break;
					case 2:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t ");
						}
						printf("%5d    ", i);
						if(i==6 || i==12 || i==18||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 3:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t  ");
						}
						printf("%5d    ", i);
						if(i==5 || i==12 || i==19||i==26)
						{
							printf("\n");
						    
						}
					}
					break;
					case 4:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t   ");
						}
						printf("%5d    ", i);
						if(i==4 || i==11 || i==18||i==25)
						{
							printf("\n");
						    
						}
					}
					break;
					case 5:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t    ");
						}
						printf("%5d    ", i);
						if(i==3 || i==10 || i==17||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 6:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t     ");
						}
						printf("%5d    ", i);
						if(i==2 || i==9 || i==16||i==23||i==30)
						{
							printf("\n");
						    
						}
					}
					break;
					case 7:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t\t      ");
						}
						printf("%5d    ", i);
						if(i==1 || i==8 || i==15||i==22 || i==29)
						{
							printf("\n");
						    
						}
					}
					break;
				
						
				}
				break;
			case 5:
				printf("\tMay\n\nMonday  Tuesday  Wednesday  Thursday  Friday  Saturday    Sunday\n");
				
				switch(day)
				{
					case 1:
					for(i=1; i<=31; i++)
					{
						printf("%5d    ", i);
						if(i==7 || i==14 || i==21||i==28)
						{
							printf("\n");
						    
						}
					}
					break;
					case 2:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t ");
						}
						printf("%5d    ", i);
						if(i==6 || i==12 || i==18||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 3:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t  ");
						}
						printf("%5d    ", i);
						if(i==5 || i==12 || i==19||i==26)
						{
							printf("\n");
						    
						}
					}
					break;
					case 4:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t   ");
						}
						printf("%5d    ", i);
						if(i==4 || i==11 || i==18||i==25)
						{
							printf("\n");
						    
						}
					}
					break;
					case 5:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t    ");
						}
						printf("%5d    ", i);
						if(i==3 || i==10 || i==17||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 6:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t     ");
						}
						printf("%5d    ", i);
						if(i==2 || i==9 || i==16||i==23||i==30)
						{
							printf("\n");
						    
						}
					}
					break;
					case 7:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t\t      ");
						}
						printf("%5d    ", i);
						if(i==1 || i==8 || i==15||i==22 || i==29)
						{
							printf("\n");
						    
						}
					}
					break;
				
						
				}
				break;
			case 6:
				printf("\tJune\n\nMonday  Tuesday  Wednesday  Thursday  Friday  Saturday    Sunday\n");
				
				switch(day)
				{
					case 1:
					for(i=1; i<=30; i++)
					{
						printf("%5d    ", i);
						if(i==7 || i==14 || i==21||i==28)
						{
							printf("\n");
						    
						}
					}
					break;
					case 2:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t ");
						}
						printf("%5d    ", i);
						if(i==6 || i==12 || i==18||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 3:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t  ");
						}
						printf("%5d    ", i);
						if(i==5 || i==12 || i==19||i==26)
						{
							printf("\n");
						    
						}
					}
					break;
					case 4:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t   ");
						}
						printf("%5d    ", i);
						if(i==4 || i==11 || i==18||i==25)
						{
							printf("\n");
						    
						}
					}
					break;
					case 5:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t    ");
						}
						printf("%5d    ", i);
						if(i==3 || i==10 || i==17||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 6:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t     ");
						}
						printf("%5d    ", i);
						if(i==2 || i==9 || i==16||i==23||i==30)
						{
							printf("\n");
						    
						}
					}
					break;
					case 7:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t\t      ");
						}
						printf("%5d    ", i);
						if(i==1 || i==8 || i==15||i==22 || i==29)
						{
							printf("\n");
						    
						}
					}
					break;
				
						
				}
				break;
			case 7:
				printf("\tJuly\n\nMonday  Tuesday  Wednesday  Thursday  Friday  Saturday    Sunday\n");
				
				switch(day)
				{
					case 1:
					for(i=1; i<=31; i++)
					{
						printf("%5d    ", i);
						if(i==7 || i==14 || i==21||i==28)
						{
							printf("\n");
						    
						}
					}
					break;
					case 2:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t ");
						}
						printf("%5d    ", i);
						if(i==6 || i==12 || i==18||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 3:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t  ");
						}
						printf("%5d    ", i);
						if(i==5 || i==12 || i==19||i==26)
						{
							printf("\n");
						    
						}
					}
					break;
					case 4:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t   ");
						}
						printf("%5d    ", i);
						if(i==4 || i==11 || i==18||i==25)
						{
							printf("\n");
						    
						}
					}
					break;
					case 5:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t    ");
						}
						printf("%5d    ", i);
						if(i==3 || i==10 || i==17||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 6:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t     ");
						}
						printf("%5d    ", i);
						if(i==2 || i==9 || i==16||i==23||i==30)
						{
							printf("\n");
						    
						}
					}
					break;
					case 7:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t\t      ");
						}
						printf("%5d    ", i);
						if(i==1 || i==8 || i==15||i==22 || i==29)
						{
							printf("\n");
						    
						}
					}
					break;
				
						
				}
				break;
			case 8:
				printf("\tAugust\n\nMonday  Tuesday  Wednesday  Thursday  Friday  Saturday    Sunday\n");
				
				switch(day)
				{
					case 1:
					for(i=1; i<=31; i++)
					{
						printf("%5d    ", i);
						if(i==7 || i==14 || i==21||i==28)
						{
							printf("\n");
						    
						}
					}
					break;
					case 2:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t ");
						}
						printf("%5d    ", i);
						if(i==6 || i==12 || i==18||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 3:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t  ");
						}
						printf("%5d    ", i);
						if(i==5 || i==12 || i==19||i==26)
						{
							printf("\n");
						    
						}
					}
					break;
					case 4:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t   ");
						}
						printf("%5d    ", i);
						if(i==4 || i==11 || i==18||i==25)
						{
							printf("\n");
						    
						}
					}
					break;
					case 5:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t    ");
						}
						printf("%5d    ", i);
						if(i==3 || i==10 || i==17||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 6:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t     ");
						}
						printf("%5d    ", i);
						if(i==2 || i==9 || i==16||i==23||i==30)
						{
							printf("\n");
						    
						}
					}
					break;
					case 7:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t\t      ");
						}
						printf("%5d    ", i);
						if(i==1 || i==8 || i==15||i==22 || i==29)
						{
							printf("\n");
						    
						}
					}
					break;
				
						
				}
				break;
			case 9:
				printf("\tSeptember\n\nMonday  Tuesday  Wednesday  Thursday  Friday  Saturday    Sunday\n");
				
				switch(day)
				{
					case 1:
					for(i=1; i<=30; i++)
					{
						printf("%5d    ", i);
						if(i==7 || i==14 || i==21||i==28)
						{
							printf("\n");
						    
						}
					}
					break;
					case 2:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t ");
						}
						printf("%5d    ", i);
						if(i==6 || i==12 || i==18||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 3:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t  ");
						}
						printf("%5d    ", i);
						if(i==5 || i==12 || i==19||i==26)
						{
							printf("\n");
						    
						}
					}
					break;
					case 4:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t   ");
						}
						printf("%5d    ", i);
						if(i==4 || i==11 || i==18||i==25)
						{
							printf("\n");
						    
						}
					}
					break;
					case 5:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t    ");
						}
						printf("%5d    ", i);
						if(i==3 || i==10 || i==17||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 6:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t     ");
						}
						printf("%5d    ", i);
						if(i==2 || i==9 || i==16||i==23||i==30)
						{
							printf("\n");
						    
						}
					}
					break;
					case 7:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t\t      ");
						}
						printf("%5d    ", i);
						if(i==1 || i==8 || i==15||i==22 || i==29)
						{
							printf("\n");
						    
						}
					}
					break;
				
						
				}
				break;
			case 10:
				printf("\tOctober\n\nMonday  Tuesday  Wednesday  Thursday  Friday  Saturday    Sunday\n");
				
				switch(day)
				{
					case 1:
					for(i=1; i<=31; i++)
					{
						printf("%5d    ", i);
						if(i==7 || i==14 || i==21||i==28)
						{
							printf("\n");
						    
						}
					}
					break;
					case 2:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t ");
						}
						printf("%5d    ", i);
						if(i==6 || i==12 || i==18||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 3:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t  ");
						}
						printf("%5d    ", i);
						if(i==5 || i==12 || i==19||i==26)
						{
							printf("\n");
						    
						}
					}
					break;
					case 4:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t   ");
						}
						printf("%5d    ", i);
						if(i==4 || i==11 || i==18||i==25)
						{
							printf("\n");
						    
						}
					}
					break;
					case 5:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t    ");
						}
						printf("%5d    ", i);
						if(i==3 || i==10 || i==17||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 6:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t     ");
						}
						printf("%5d    ", i);
						if(i==2 || i==9 || i==16||i==23||i==30)
						{
							printf("\n");
						    
						}
					}
					break;
					case 7:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t\t      ");
						}
						printf("%5d    ", i);
						if(i==1 || i==8 || i==15||i==22 || i==29)
						{
							printf("\n");
						    
						}
					}
					break;
				
						
				}
				break;
			case 11:
				printf("\tNovember\n\nMonday  Tuesday  Wednesday  Thursday  Friday  Saturday    Sunday\n");
				
				switch(day)
				{
					case 1:
					for(i=1; i<=30; i++)
					{
						printf("%5d    ", i);
						if(i==7 || i==14 || i==21||i==28)
						{
							printf("\n");
						    
						}
					}
					break;
					case 2:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t ");
						}
						printf("%5d    ", i);
						if(i==6 || i==12 || i==18||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 3:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t  ");
						}
						printf("%5d    ", i);
						if(i==5 || i==12 || i==19||i==26)
						{
							printf("\n");
						    
						}
					}
					break;
					case 4:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t   ");
						}
						printf("%5d    ", i);
						if(i==4 || i==11 || i==18||i==25)
						{
							printf("\n");
						    
						}
					}
					break;
					case 5:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t    ");
						}
						printf("%5d    ", i);
						if(i==3 || i==10 || i==17||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 6:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t     ");
						}
						printf("%5d    ", i);
						if(i==2 || i==9 || i==16||i==23||i==30)
						{
							printf("\n");
						    
						}
					}
					break;
					case 7:
					for(i=1; i<=30; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t\t      ");
						}
						printf("%5d    ", i);
						if(i==1 || i==8 || i==15||i==22 || i==29)
						{
							printf("\n");
						    
						}
					}
					break;
				
						
				}
				break;
			case 12:
				printf("\tDecember\n\nMonday  Tuesday  Wednesday  Thursday  Friday  Saturday    Sunday\n");
				
				switch(day)
				{
					case 1:
					for(i=1; i<=31; i++)
					{
						printf("%5d    ", i);
						if(i==7 || i==14 || i==21||i==28)
						{
							printf("\n");
						    
						}
					}
					break;
					case 2:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t ");
						}
						printf("%5d    ", i);
						if(i==6 || i==12 || i==18||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 3:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t  ");
						}
						printf("%5d    ", i);
						if(i==5 || i==12 || i==19||i==26)
						{
							printf("\n");
						    
						}
					}
					break;
					case 4:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t   ");
						}
						printf("%5d    ", i);
						if(i==4 || i==11 || i==18||i==25)
						{
							printf("\n");
						    
						}
					}
					break;
					case 5:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t    ");
						}
						printf("%5d    ", i);
						if(i==3 || i==10 || i==17||i==24)
						{
							printf("\n");
						    
						}
					}
					break;
					case 6:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t     ");
						}
						printf("%5d    ", i);
						if(i==2 || i==9 || i==16||i==23||i==30)
						{
							printf("\n");
						    
						}
					}
					break;
					case 7:
					for(i=1; i<=31; i++)
					{
						if(i==1)
						{
							printf("\t\t\t\t\t\t      ");
						}
						printf("%5d    ", i);
						if(i==1 || i==8 || i==15||i==22 || i==29)
						{
							printf("\n");
						    
						}
					}
					break;
				
						
				}
				
				break;
//			default:
//				printf("Wrong month");
//				break;
		}
	}
	
}
