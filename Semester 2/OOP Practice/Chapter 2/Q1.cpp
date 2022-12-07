// 5 grams sweetner to kill
// mouse mass 35grams
// weight of dieghter: 45400grams sweetener per 100 pounds
//350gm has 0.35gm sweetener 
//454gm per pound ats.

#include <iostream>

using namespace std;

int main()
{
	const double sweet = 0.001;
	double sweet_in_can=0.001*350, stop;
	double weight, cans, cans_in_grams;
	
	cout <<"Input your goal weight in pounds: ";
	cin >> weight;
	stop = 454 * weight;
	cout << stop "grams of ats will kill you" << endl;
	
}
