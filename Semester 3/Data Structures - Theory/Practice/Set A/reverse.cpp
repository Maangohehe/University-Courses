#include <iostream>
using namespace std;

int print(int num)
{
    if (num >= 0)
    {
        cout << num << " ";
        print(--num);
        if (num == -1 || num == 0 || num)
            cout << ++num << " ";
    }
}

int main(void)
{
    int num;
    cout << "Input number: ";
    cin >> num;
    print(num);
}