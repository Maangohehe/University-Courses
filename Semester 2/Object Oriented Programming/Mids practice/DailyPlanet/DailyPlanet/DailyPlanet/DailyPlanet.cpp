#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

class SubEditor
{
	string new_report;
public:
	SubEditor(string report)
	{
		cout << report << endl;
		cout << "Make the necessary edits: ";
		getline(cin >> ws, new_report);
	}

	string returnReport()
	{
		return new_report;
	}
};

class Editor
{
	SubEditor *se1;
	
public:
	Editor(string report)
	{
		cout << report << endl;
		cout << "*The Editor checks that report and tries to find any errors*" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "*Sends the report to sub editor" << endl;
		se1 = new SubEditor(report);
	}

	string returnNewReport()
	{
		return se1->returnReport();
	}

};

class Reporter
{
	string report, name;
	Editor *e1;
public:
	Reporter()
	{
		cout << "Good morning reporter! Input your name: ";
		getline(cin >> ws, name);
	}

	void dailyReport()
	{
		cout << "What would you like to report today: ";
		getline(cin >> ws, report);
		cout << "Great! I'll be sending this to the editor" << endl;
		e1 = new Editor(report);
	}
};

class DailyPlanet
{
	Reporter* r1;
	Editor* recieve;
	string report;
public:
	DailyPlanet()
	{
		r1 = new Reporter();
	}

	void takeReport()
	{
		r1->dailyReport();
	}

	void editedReport()
	{
		recieve->returnNewReport();
	}

};



int main()
{
	DailyPlanet rep1;
	rep1.takeReport();
	rep1.editedReport();
}