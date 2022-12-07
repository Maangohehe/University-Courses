/*
In order to issue loans, your application must keep track of customer details including their first name, last
name, NIC#, permanent address, current city, annual income and also whether the customer is a tax filer
or not. Every customer is going to have a different NIC#, but the NIC# will remain the same for each
individual customer.
The bank has several branches across the country and each of these branches are identified by their city,
& also contain a branch code and are managed by a branch supervisor. Furthermore, different branch
can offer loans to their customers at different interest rates, however, only one interest rate is used by
each branch. The interest rate can either be 1.5%, 2.0% or 3.5%.
*/

#include <iostream>
#include <string>

using namespace std;

class Branch {
	string branch_city, branch_code, branch_supervisor;
	const float interest_rates; 
	float loans;
public:

	Branch(float ffr): interest_rates(ffr)
	{
		cout << "Interest Rate: " << interest_rates;
	}


};

class Bank
{
	// The bank launches 2 branches of it's own assigning them their code and city.
	Branch *b1; // Pointer objects created when passing a value.
	Branch *b2;
	Branch* b3;
	float interest;
	
public:

	Bank()
	{
		cout << "How much interest would you like to assign to branch 1: ";
		cin >> interest;
	}
	void change_interest()
	{
		b1 = new Branch(2.0);
	}
	


};

class Customer {
	string fname, lname, address, city;
	const string nic; 
	float income;
	bool tax_filer;
};

int main()
{
	Bank b;
}
