#include <iostream>
using namespace std;

class Numbers{
    int number, *ptr_number;
    public:
        Numbers()
        {
            number = 0;
            ptr_number = new int;
        }
         void assign()
         {
            cout << "Number: ";
            cin >> number;
            ptr_number = &number;
         }
         Numbers(const Numbers &obj)
         {
            number = obj.number;
         }
         ~Numbers()
         {

         }
};

int main(int argc, char** argv)
{
    Numbers n1;
    n1.assign();
    Numbers n2(n1);
}