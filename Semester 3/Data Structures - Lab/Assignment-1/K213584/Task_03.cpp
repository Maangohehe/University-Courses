#include <iostream>
#include <vector>
using namespace std;

vector<int> get_factor(int num);

int main(int argc, char** argv)
{
    int num;
    if (atoi(argv[1]) == -1)
    {
        return 1;
    }
    if (argc == 1)
    {
        cout << "Please provide a number: ";
        cin >> num;
    }
    else
    {
        num = atoi(argv[1]);
    }
    vector<int> factors = get_factor(num);
    int sum = 0;
    for (auto iter = factors.begin(); iter != factors.end(); iter++)
    {
        cout << *iter << ", ";
        sum += *iter;
    }
    cout << endl << "Sum of all factors is " << sum << endl;
    return 0;
}

vector<int> get_factor(int num)
{
    int factor = num;
    vector<int> factors;
    for (int i = factor; i > 0; i--)
    {
        if (num % i == 0)
        {
            factors.push_back(i);
        }
    }
    return factors;
}