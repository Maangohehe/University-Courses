// Author: Muhammad Hussain Javed
// Roll Number: 21K-3584
// Section: BCY-3A

#include <iostream>
using namespace std;
class node{
    int data;
    node* next;
    public:
        node()
        {
            data = 0;
            next = nullptr;
        }
        node(int data)
        {
            this->data = data;
            next = nullptr;
        }
        int get_data()
        {
            return data;
        }
        node* get_next()
        {
            return next;
        }
        void set_data(int data)
        {
            this->data = data;
        }
        void set_next(node* next)
        {
            this->next = next;
        }
};
class S_Linked_list{
    node* head, *list;
    public:
        S_Linked_list()
        {
            head = nullptr;
            list = nullptr;
            cout << "List created successfully." << endl;
        }
        S_Linked_list(node* n)
        {
            head = n;
            cout << "List created successfully." << endl;
        }
};

int main(void)
{
    S_Linked_list list;
    return 0;
}