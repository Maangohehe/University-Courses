/* NineTails.cpp
	Assignment 2, created by Muhammad Hussain Javed of class BCY-2B
	Roll number: 21K-3584
	*		  *
	*		  * 
	*		  *
	* * * * * *
	*		  *
	*		  *
	*		  * 
	*		  *	
	
	*/
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
string random_categ(string id)
{
	srand((unsigned)time(0));
	int i = (rand() % 100) + 1;
	string str = to_string(i);
	id += str;
	return id;
}
//a) Declaring all classes
class Gift //Abstract class
{
protected:
	string catID;
	int price, tax, amount; 
	static int total;
	bool taxAplicable;
	static int stock;
	static int revenue;
public:
	Gift() 
	{
		price = 0; tax = 0; amount = 0; total = 0;
	}
	virtual void setGiftPrice() = 0;
	virtual void bill() = 0;

};

 int Gift::stock = 100; // initializing of static variable
 int Gift::revenue = 0;
 int Gift::total = 0;

//b) Declaring all variables.

class Flowers:protected Gift
{
	string floralType; 
public:
	Flowers()
	{
		catID = "FL";
		catID = random_categ(catID);
		amount = 1;
		taxAplicable = 0;
		price = 50;
	}

	Flowers(const Flowers& old_obj)//f) Copy Constructor for Flower
	{
		price = old_obj.price;
		floralType = old_obj.floralType;
	}

	void setGiftPrice() //b)Setter functions
	{
		int ch;
		cout << "Choose the floral type of the flower: " << endl;
		cout << "1. Rose\n2. Tulip\n3. Daisy\nInput: " << endl;
		cin >> ch;
		if (ch == 1)
		{
			floralType = "Rose";
		}
		else if (ch == 2)
		{
			floralType = "Tulip";
		}

		else if (ch == 3)
		{
			floralType = "Daisy";
		}
		int tempfl=0;
		revenue = tempfl; //Here we assume that the company earns 10% off of every product a customer purchases
		cout << "Amount of flowers: ";
		cin >> amount;
		stock -= amount;
	}

	void bill() //c)Function overriding.
	{
		tax = 0;
		total = price * amount;
		revenue += (total * 10) / 100;
		cout << "You have purchased: \nFlowers: x" << amount << " " << floralType << "\nCategoryID: " << catID << "\nTotal: " << total << "\nTax: " << tax << "%" << endl;
	}
};

class Perfume : public Gift //made public for part d.
{
	string brand; 
public:
	Perfume()
	{
		tax = 7;
		catID = random_categ("CK");
		taxAplicable = 1;
	}

	
	void setGiftPrice()
	{
		cout << "Input the brand of perfume you would like to buy\n\t GUCCI, VERSACE, CHANEL: ";
		cin >> brand;
		if (brand == "GUCCI" || brand == "gucci" || brand == "Gucci" || brand == "1")
		{
			brand = "GUCCI";
		}
		else if (brand == "VERSACE" || brand == "versace" || brand == "Versace" || brand == "2")
		{
			brand = "VERSACE";
		}
		else if (brand == "CHANEL" || brand == "chanel" || brand == "Chanel" || brand == "3")
		{
			brand = "CHANEL";
		}
		
		if (brand == "GUCCI")
			price = 1200;
		else  if (brand == "VERSACE")
			price = 1100;
		else if (brand == "CHANEL")
			price = 950;
		cout << "Input the amount you want to buy: ";
		cin >> amount;	
		stock -= amount;
	}

	void bill()
	{
		total = price * amount;
		int temptax = (total * tax)/100;
		total += temptax;
		temptax = (price * 10) / 100;
		revenue += temptax; //Here we assume that the company earns 10% off of every product a customer purchases
		cout << "You have purchased: \nPerfumes: x" << amount << " " << brand << "\nCategoryID: " << catID << "\nTotal: " << total << "\nTax: " << tax << "%" << endl;
	}
};

class ChocolateCake :protected Gift
{
	int weight;
	string msgOnCake;
public:
	ChocolateCake()
	{
		weight = 0;
		tax = 4;
		taxAplicable = 1;	
	}
	
	void setGiftPrice()
	{
		cout << "Input the weight of the chocolate cake (lbs): ";
		cin >> weight;
		cout << "What would be the message on the cake: ";
		getline(cin >> ws, msgOnCake);
		stock -= 1;
		price = weight * 700;	
	}

	void bill()
	{
		int temptax = (price * tax) / 100;
		price += temptax;
		revenue += (price * 10) / 100;
		cout << "You have purchased: \nChocolate Cake: " << weight << "lbs" << "\nCategoryID: " << catID << "\nTotal: " << total << "\nTax: " << tax << "%" << endl;
	}
};

class HappyBundle:protected Flowers, protected Perfume, protected ChocolateCake, protected Gift
{
	int ch, price;
public:
	HappyBundle()
	{
		ch = 0;
		price = 0;
	}
	//we assume 2 happy bundles exist, customers have the freedom to chose the amount of gifts in a happy bundle
	void setGiftPrice()
	{
		cout << "Which Happy bundle would you like to have?\n1)Happy Bundle 1.\n2)Happy Bundle 2. \nInput: ";
		cin >> ch;
		if (ch == 1)//This bundle gives flowers and perfumes
		{
			Flowers* hapfl1;
			hapfl1 = new Flowers();
			hapfl1->setGiftPrice();
			hapfl1->bill();
			price += total; 
			Perfume* happerf1; 
			happerf1 = new Perfume();
			happerf1->setGiftPrice();
			happerf1->bill();
			price += total;
			revenue += (price * 10) / 100;
			
		}

		if (ch == 2) //This bundle gives chocolate and perfume
		{
			ChocolateCake* hapchoco1;
			hapchoco1 = new ChocolateCake();
			hapchoco1->setGiftPrice();
			hapchoco1->bill();
			price += total;
			Perfume* happerf2;
			happerf2 = new Perfume();
			happerf2->setGiftPrice();
			happerf2->bill();
			price += total;
			revenue += (price * 10) / 100;

		}
	}
	int operator>(HappyBundle hap) //e)Overloading the '>' operator
	{
		if (price > hap.price)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void bill()
	{
		if (ch == 1)
		{
			cout << "Bundle 1: " << price << "PKR" << endl;
		}

		if (ch == 2)
		{
			cout << "Bundle 2: " << price << "PKR" << endl;
		}
	}
};


class TaxationDepartment:protected Flowers, protected Perfume, protected ChocolateCake
{
public:
	void disp_tax()
	{
		cout << "Revenue Earned by the company is: " << revenue << "PKR";
	}
};

class NineTails
{
	string contactNo, address, email;
public:
	NineTails()
	{
		int ch;
		cout << "Welcome to Ninetails Gift delivery service "; // Here the customer info is being taken.
		cout << "\nInput contact number: ";
		getline(cin >> ws, contactNo);
		cout << "Input the address: ";
		getline(cin >> ws, address);
		cout << "Input the email: ";
		getline(cin >> ws, email);
		//Gift* gift1; // Nine tails has a gift service.
		//gift1 = new Gift();
		
		cout << "Input the gift you want"
			<< "\n1. Flower\n2. Chocolate Cake\n3. Perfumes\n4. Happy Bundle" << endl;
		cin >> ch;
		if (ch == 1)
		{
			Flowers* flower1;
			flower1 = new Flowers();
			flower1->setGiftPrice();
			flower1->bill();
			
		}
		else if (ch == 2)
		{
			ChocolateCake* cake1;
			cake1 = new ChocolateCake();
			
		}
		else if (ch == 3)
		{
			Perfume* perf1;
			perf1 = new Perfume();
			perf1->setGiftPrice();
			perf1->bill();	
		}
		/*else if (ch == 4)
		{
			HappyBundle* happybundle;
			happybundle = new HappyBundle();
			happybundle->setGiftPrice();
			happybundle->bill();
		}*/
	}
};

int main()
{
	NineTails customer;
	Gift* gift1; //d)Access functions of perfume via base class Gift.
	Perfume perfume;
	gift1 = &perfume;
	gift1->setGiftPrice(); //Will execute right after NineTails object is finished.
	gift1->bill();
	cout << "To check which bundle gives more profit: " << endl;
	HappyBundle happy1, happy2;
	happy1.setGiftPrice();
	happy1.bill();
	happy2.setGiftPrice();
	happy2.bill();
	if (happy1 > happy2)
	{
		cout << "Bundle 1 provide more profit" << endl;
	}
	else
	{
		cout << "Bundle 2 provides more profit" << endl;
	}
	Flowers cp1, cp2;
	cp1.setGiftPrice();
	cp1.bill();
	cp2 = cp1;
	TaxationDepartment taxdep;
	taxdep.disp_tax(); //h) Mechanism for Tax class


	
}