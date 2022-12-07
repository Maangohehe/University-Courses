#include <iostream>
#include <cstring>
using namespace std;
class Exam{
	protected:
		float quiz1, quiz2, mid, final;
};

class Quiz:protected Exam
{
	float result, avg;
	public:
		void calc_quiz();
		void disp_quiz();
};

class Midterm:protected Exam
{
	float result_mid, avg_mid;
	public:
		void cal_mid();
		void disp_quiz();
};

void Quiz::calc_quiz()
{
	cout << "Input marks of quiz 1: ";
	cin >> quiz1;
	cout << "Input for quiz 2: ";
	cin >> quiz2;
	result = quiz1+quiz2;
	avg=(result/20)*25;
}

void Quiz::disp_quiz()
{
	cout << "Marks in "
		<< "Quiz 1: " << quiz1 << endl
		<< "Quiz 2: " << quiz2 << endl;
	cout << "Percent: " << avg << "%" << endl;
}

int main()
{
	Quiz q;
	q.calc_quiz();
	q.disp_quiz();
}
