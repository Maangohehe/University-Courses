#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;
int main()
{
	char username[4]={0}, password[5]={0}, login_username[4]={0}, login_pass[5]={0};
	int numeric=0, caps=0, small=0;
	cout << "Input you username: ";
	cin >> username;
	x:
	cout << "Input your password: ";
	cin >> password;
	for(int i=0; i<5; i++)
	{
		if(password[i] >='A' && password[i] <= 'Z')
		{
			caps=1;
		}
		
		if(password[i] >='a' && password[i] <= 'z')
		{
			small=1;
		}
		
		if(password[i] >= '0' && password[i] <= '9')
		{
			numeric=1;
		}
	}
	
	if(caps==1 && numeric == 1 && small==1)
	{
		cout << "Account Created Successfully." << endl;
	}
	else{
		cout << "Password should have atleast 1 numeric, small and capital letter." <<endl;
		goto x;
	}
	f:
	sleep(3);
	system("cls");
	cout << "Login with username and password." << endl;
	cout << "Username: " <<endl;
	cin >> login_username;
	cout << "Password: " <<endl;
	cin >> login_pass;
	

	for(int i=0; i<4; i++)
	{
		if(username[i]!=login_username[i])
		{
			cout << "Incorrect Username";
			goto f;
		}
	}
	for(int i=0; i<5; i++)
	{
	    if(password[i]!=login_pass[i])
    	{
		cout << "Password Incorrect" << endl;
		goto f;
	    }
			
	}
		cout << "Welcome " << username << ",you are now logged in." << endl;
	    
	
	
	
}
