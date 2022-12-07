#include <iostream>
#include <string>


// The following program consist of a class StudentSociety. The main purpose of this program is
// to demostrate how a Student society would fucntion if it was a program.
using namespace std;

class StudentSociety{
    // ints declared with "i", strings with "s" etc.
    string ssociety_name, sfaculty_head, spresident, sgeneral_secretary;
	string sevents[100], vote[2];
    int ibudget, icnt;

    public:

    StudentSociety()
    {
        //The following constucter is a default constructer and takes user input.
        cout << "Input the Society name: ";
        getline(cin, ssociety_name);
        cout << "Input the name of the Faculty Head: ";
        getline(cin, sfaculty_head);
        cout << "Input the name of the President: ";
        getline(cin, spresident);
        cout << "Input the name of the General Secretary: ";
        getline(cin, sgeneral_secretary);
        cout << "Input the Budget: ";
        cin >> ibudget;
        cout << "Input the total number of events: ";
        cin >> icnt;
        for(int i = 0; i < icnt; i++)
        {
            cout << "Event " << i+1 << ": ";
            getline(cin >> ws, sevents[i]); // ws is used to remove the cin skip.
        }
    }

    StudentSociety(int budget, string soc_name, string fac_head, string pres, string gen_sec): ibudget(budget), ssociety_name(soc_name), sfaculty_head(fac_head), spresident(pres), sgeneral_secretary(gen_sec) 
    {
        // StudentSociety(string)
        // Overloaded constructor
    }

    StudentSociety(int bud): ibudget(bud), ssociety_name("Nawaz Sharif"), sfaculty_head("Imran Khan")
    {
        // Another overloaded constructor to initialize object members.
        // This constuctor will call a function Poll().
        string *name;
        name = Poll();
        for(int i = 1; i <=2; i++)
        cout << "WOOHOO!!!" << *(name + i) << " Won" << endl;
    }

    string *Poll()
    {

        cout << "Type the name of the General Secretary you want to ellect: ";
        getline(cin >> ws, vote[1]);
        cout << "Type the name of the President you want to ellect: ";
        getline(cin >> ws, vote[2]);

        return vote;
    }

};

int main()
{
    StudentSociety s1; // An object to call a default constructor.
    StudentSociety s2(50000, "ACM Cyber", "Ali", "Jawwad", "Musharraf"); // An object to call a parameterized constructor
    StudentSociety s3(100000);
}
