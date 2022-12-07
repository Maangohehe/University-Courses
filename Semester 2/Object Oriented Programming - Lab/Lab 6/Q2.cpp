#include <iostream>

using namespace std;

class employees
{
	public:
		string name; int number;
		employees()
		{
			cout << "Input the name of the employee: ";
			cin >> name;
			cout << "Input the employee number: ";
			cin >> number;
		}
};

class manager:public employees
{
	string title;
	float club_dues;
	public:
		manager()
		{
			title = "The Manager";
			club_dues = 125.5;
		}
		void getman()
		{
			cout << "Manager title: " << title << endl;
			cout << "Manager club dues are:  " << club_dues << endl;
		}
};

class scientist:public employees
{   
	string title;
	int publication;
	public:
		scientist()
		{
			title = "The great scientist";
			publication = 2;

		}
		void getsc()
		{
			cout << "Scientist title: " << title << endl;
			cout << "Scientist publications: " << publication << endl;
		}
};

class laborer:public employees
{
	string title;
	public:
		laborer()
		{
			title = "The laborer";
		}
		void getlabor()
		{
			cout << "Title of labourer: " << title << endl;
		}
};

int main()
{
	laborer l; scientist sc; manager man;
	l.getlabor();
	sc.getsc();
	man.getman();

}


