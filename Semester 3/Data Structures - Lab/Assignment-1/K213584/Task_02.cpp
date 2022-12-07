#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char** argv)
{
    ifstream read_obj(argv[1]);
    if (!read_obj)
    {
        cout << "File does not exist" << endl;
        return 1;
    }
    string text;
    getline(read_obj, text);
    read_obj.close();
    ofstream write_obj("output.txt");
    if (!write_obj)
    {
        cout << "File writing failed" << endl;
        return 1;
    }
    write_obj << text;
    write_obj.close();
    return 0;
}