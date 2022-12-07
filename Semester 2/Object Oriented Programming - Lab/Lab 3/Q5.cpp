// 1. system("cls") is used to clear the console.
// 2. getch() is used to continue the flow when user hits enter.

#include <iostream>
#include <unistd.h>
#include <string>
#include <conio.h>

using namespace std;

class bank{
	char clean;
	float balance=0, transcnt=0, dep=0, with=0, interest=0.1, rate=0; 
	public:
		void disptrans()
		{
			cout << "Number of transactions performed: " << transcnt << endl;
			clean=getch();
		    system("cls");	
		}
	void savebalance()
	{
		cout << "Input the current balance: ";
		cin >> balance;
		clean=getch();
		system("cls");	
	}
	
	void deposit()
	{
		cout << "Input the amount you want to deposit: ";
		cin >> dep;
		balance+=dep;
		transcnt++;
		clean=getch();
		system("cls");	
	}
	
	void withdraw()
	{
		cout << "Input the amount you want to withdraw: ";
		cin >> with;
		balance-=with;
		transcnt++;
		clean=getch();
		system("cls");	
	}
	
	void interestRate()
	{
		cout << "How much interest rate to add: ";
		cin >> rate;
		rate=rate/100;
		interest+=rate;
		clean=getch();
		system("cls");	
	}
	
	void displayInterest()
	{
		cout << "Current interest rate: " << interest*100 << "%" << endl;
		clean=getch();
		system("cls");	
	}
	
	void dispinfo()
	{
		cout << "Account Balance: " << balance << "$" << endl; 
		clean=getch();
		system("cls");	
	}
};

int main()
{
	bank action;
	int ch, i=1;
	while(i!=0)
	{
		
	cout << "\t\t\t\t\tWelcome to Meezan bank" << endl << endl;
	cout << "1. Display Account balance\n2. Display Number of transaction\n3. Display interest earned for this period\n4. Make a deposit\n5. Make a withdrawal\n6. Add interest for this period\n7. Exit the program." << endl;
	cin >> ch;
	system("cls");
	
	if(ch==1)
	{
		action.dispinfo();
	}
	if(ch==2)
	{
		action.disptrans();
	}
	if(ch==3)
	{
		action.displayInterest();
	}
	if(ch==4)
	{
		action.deposit();
	}
	if(ch==5)
	{
		action.withdraw();
	}
	if(ch==6)
	{
		action.interestRate();
	}
	if(ch==7)
	{
		i=0;
	}
	
}

}
