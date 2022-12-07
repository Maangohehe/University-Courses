#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

double get_data(double strt_balance);
double credit(double sum, double strt_balance, int acc_num);

int main()
{
	int acc_num = 0;
	double num = 0;
	double sum=0;
	double strt_balance = 0;
	cout << "Enter account number: ";
	cin >> acc_num;
	sum=get_data(strt_balance);
	cout << "Your Total: " << sum << endl;
	credit(sum, strt_balance, acc_num);
}

double get_data(double strt_balance)
{
	int num_products=0;
	double sum = 0;
	cout << "Input the beginning balance: ";
	cin >> strt_balance;
	cout << "How many products would you like to purchase: ";
	cin >> num_products;
	double price_of_items[num_products] = { 0 };
	for (int i = 1; i <= num_products; i++)
	{
		cout << "Enter charges for item " << i << ":";
		cin >> price_of_items[i];
		sum += price_of_items[i];
	}
	for (int i = 1; i <= num_products; i++)
	{
		cout << "Price of item " << i << ": " << price_of_items[i] << endl;
	}

	return sum;
}

double credit(double sum, double strt_balance, int acc_num)
{
	double creds=0, credLim=0, newBalance=0, rem=0;
	cout << "Enter credits: ";
	cin >> creds;
	cout << "Enter credit limits: ";
	cin >> credLim;
	newBalance=sum+strt_balance-creds;
	rem=credLim-newBalance;
	if(newBalance>credLim)
	{
		cout << "Account Number: " << acc_num << endl;
		cout << "Credit Limit: " << credLim << endl;
		cout << "Balance: " << newBalance << endl; 
		cout << "Credit Limit Exceeds by " << rem << endl;
	}
	
	else{
		cout << "Account Number: " << acc_num << endl;
		cout << "Credit Limit: " << credLim <<endl;
		cout << "Balance: " << newBalance << endl; 
		cout << "Credit Limit not exceeded" << endl;
	}
	
}



