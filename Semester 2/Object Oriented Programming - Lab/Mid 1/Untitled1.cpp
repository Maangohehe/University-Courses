#include <iostream>
#include <string>

using namespace std;

class Account{
	protected:
	string name, acc_type;
	int acc_num; float dep, bal, dep_int;
	public:
		void set()
		{
			bal=0;
			dep=0;
			dep_int=0.2;
		}
		void deposit()
		{
			
			cout << "Input amount you want to deposit: ";
			cin >> dep;
			bal+=dep;
		}
		void disp_bal()
		{
			cout << "Current Balance: " << bal << endl;
		}
};

class cur_acct:protected Account{
	
};

class sav_acct:protected Account{
	
};

int main()
{
	
}
