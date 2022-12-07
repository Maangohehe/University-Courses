/* The following program creates 3 office object and each office object consists of 3 employees.
	The manager is created with the office and once the manager is created he assigns the employee
	with salary and office code.
*/

#include <iostream>
#include <string>

using namespace std;

class SteinGateLimited{
	int ioffice_count, iempcount;
    float famount= 50000000, fsalary;
    string sf_name, sl_name, smanager_f_name, smanager_l_name, saddress; 
    string cat = "Shenron"; //Good DBZ reference
    char cman_office_code[4], cman_address, cemp_office_code[4];// manager office code, address
    public:
        SteinGateLimited() 
        {
        	ioffice_count = 0;
        	iempcount = 0;
            cout << "First name of manager: ";
            cin >> smanager_f_name;
            cout << "Last name of manager: ";
            cin >> smanager_l_name;
            cout << "Residential Address: ";
            getline(cin >> ws, saddress);
            x:
            cout << "Office code of manager (MUST START WITH 'm'): ";
            cin >> cman_office_code;
            if(cman_office_code[0] != 'm')
            	goto x;
            	++ioffice_count;
        }
        
        SteinGateLimited(int x)
        {
        	++iempcount;
        	cout << "Employee First Name: ";
        	cin >> sf_name;
        	cout << "Employee Last Name: ";
        	cin >> sl_name;
        	cout << "Address: ";
        	getline(cin >> ws, saddress);
        	c:
        	cout << "Office Code(Must 'NOT' start with 'm'): ";
        	cin >> cemp_office_code;
        	if(cemp_office_code[0] == 'm')
        		goto c;
        	Salary_assign();	
        }
        
        float Salary_assign()
        {
        	re_sal:
        	cout << "How much salary would you like to give Employee " << iempcount << "(Office " << ioffice_count << ")(salary must not exceed 1lkh): ";
        	cin >> fsalary;
        	if(fsalary > 100000)
        	goto re_sal;
        	famount-=fsalary;
        	
		}

};

int main()
{
    SteinGateLimited office1; 
		SteinGateLimited emp1(11);
		SteinGateLimited emp2(11); 
		SteinGateLimited emp3(11);
    SteinGateLimited office2; 
		SteinGateLimited emp1_1(11); 
		SteinGateLimited emp1_2(11); 
		SteinGateLimited emp1_3(11);
    SteinGateLimited office3; 
		SteinGateLimited emp1_4(11); 
		SteinGateLimited emp1_5(11); 
		SteinGateLimited emp1_6(11);

}

