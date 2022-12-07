#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* prev, *next;
};

class dlinklist
{
    node* head, *list;
public:
    dlinklist(): head(nullptr), list(nullptr)
    {
    }
    
    void insert_beg(int data)
    {
        if (list == nullptr)
        {
            list = new node();
            list->data = data;
            list->next = nullptr;
            list->prev = nullptr;
            head = list;
        }
        else
        {
            node* new_node = new node();
            new_node->data = data;
            new_node->next = list;
            list->prev = new_node;
            new_node->prev = nullptr;
            list = new_node;
            head = list;
        }
    }

    void print()
    {
        for (node* temp = head; temp != nullptr; temp = temp->next)
        {
            cout << temp->data << " " << endl;
        }
    }

};

int main()
{
    dlinklist l1;
    l1.insert_beg(0);
    l1.insert_beg(1);
    l1.print();
}