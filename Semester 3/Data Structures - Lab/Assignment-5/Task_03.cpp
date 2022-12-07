#include <iostream>
using namespace std;

class node
{
    public:
    int data, key;
    node* next, *prev;
    node():data(0), key(0), next(), prev()
    {

    }
    node(int data, int key): data(data), key(key), next(nullptr), prev(nullptr)
    {
    }
};

class CDLlist
{
    node* head, *list;
    public:
    CDLlist():head(nullptr), list(nullptr)
    {
    }
    //i. Insert a new node at the end of the list.
    void insert_end(int data, int key)
    {
        if (list == nullptr)
        {
            list = new node(data, key);
            list->next = list;
            list->prev = list;
            head = list;
        }
        else
        {
            node* temp = new node(data, key);
            list->prev = temp;
            temp->next = list;
            node* trav = list;
            while (trav != nullptr)
            {
                if (trav->next == head)
                {
                    temp->prev = trav;
                    trav->next = temp;
                    break;
                }
                trav = trav->next;
            }
        }
    }
    //ii. Insert a new node at the beginning of list.
    void insert_beg(int data, int key)
    {
        if (list == nullptr)
        {
            list = new node(data, key);
            list->next = list;
            list->prev = list;
            head = list;
        }
        else
        {
            node* temp  = new node(data, key);
            node* trav = list;
            while (trav != nullptr)
            {
                if (trav->next == head)
                {
                    temp->prev = trav;
                    trav->next = temp;
                    break;
                }
                trav = trav->next;
            }
            temp->next = list;
            list = temp;
            head = list;
        }
    }
    //iii. Insert a new node at given position.
    void insert_pos(int data, int key, int pos)
    {
        if (list == nullptr)
        {
            list = new node(data, key);
            head = list;
        }
        else
        {
            node* temp = new node(data, key);
            node* trav = list;
            while (trav != nullptr)
            {
                if (trav->key == pos)
                {
                    temp->prev = trav;
                    temp->next = trav->next;
                    trav->next->prev = temp;
                    trav->next = temp;
                    break;
                }
                trav = trav->next;
            }
        }
    }
    //iv. Delete any node
    void DeleteNode(int pos)
    {
        if (list == nullptr)
        {
            cout << "Cannot delete from null list.";
            return;
        }
        else
        {
            node* trav = list;
            while (trav != nullptr)
            {
                if (trav->key == pos)
                {
                    trav->prev->next = trav->next;
                    trav->next->prev = trav->prev;
                    // trav->prev = nullptr;
                    // trav->next = nullptr;
                    list = trav->next;
                    head = list;
                    delete trav;
                    break;
                }
            }
            
        }
    }
    //v. Print the complete circular double link list.
    void print()
    {
        for (auto temp = head; ; temp = temp->next)
        {
            cout << temp->data << " ";
            if (temp->next == head)
            {
                break;
            }
        }
    }
};

int main(void)
{
    CDLlist list;
    list.insert_end(1, 0);
    list.insert_end(2, 1);
    list.insert_beg(0, 3);
    list.insert_pos(4, 5, 3);
    list.insert_beg(-1, 6);
    list.DeleteNode(6);
    list.print();
}