#include <iostream>
#include <string>

using namespace std;

class staff
{
	protected:
	string code, name;	
};

class education
{
	protected:
		int gen_edu, prof_qual;
};

class teacher:protected staff
{
	protected:
		string subject;
		int publication;
		staff *s1;
	public:
		teacher()
		{
			s1 = new staff;
		}
};

class typist:protected staff{
	protected:
		int speed;
};

class officer:protected staff
{
	int grade;
};

class regular:virtual protected typist
{
	
};

class casual:virtual protected typist
{
	protected:
		int daily, wages;
};

int main()
{
	teacher t1;
}

