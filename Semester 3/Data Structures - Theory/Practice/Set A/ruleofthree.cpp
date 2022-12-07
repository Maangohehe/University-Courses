#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

class LinkedList
{
    node* head, * list;
    public:
    LinkedList(): head(nullptr), list(nullptr)
    {
    }
    void insert_end(int data)
    {
        if (list == nullptr)
        {
            list = new node();
            list->data = data;
            list->next = nullptr;
            head = list;
        }
        else
        {
            node* new_node = new node();
            new_node->data = data;
            new_node->next = nullptr;
            node* trav = list;
            while (trav != nullptr)
            {
                if (trav->next == nullptr)
                {
                    trav->next = new_node;
                    break;
                }
                trav = trav->next;
            }
        }     
    }
    void print()
    {
        for (auto temp = head; temp != nullptr; temp = temp->next)
        {
            cout << temp->data << " " << endl;
        }
    }

    /*Remember Rule of three
    1. Copy constructor
    2. operator= overloading
    3. Destructor
    */
   //copy constructor
   ~LinkedList()
   {
        node* temp = list->next;
        while (list != nullptr)
        {
            delete list;
            list = temp;
            if (temp == nullptr)
            {
                break;
            }
            temp = temp->next;
        }
   }

};

int main(void)
{
    LinkedList l1;
    l1.insert_end(1);
    l1.insert_end(2);
    l1.print();
}