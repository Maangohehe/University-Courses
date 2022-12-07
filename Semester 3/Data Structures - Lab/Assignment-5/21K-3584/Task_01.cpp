#include <iostream>
using namespace std;

class node
{
    int data, key;
    node *next, *prev;

public:
    node() : data(0), key(0), next(nullptr), prev(nullptr)
    {
    }
    node(int data) : data(data), key(0), next(nullptr), prev(nullptr)
    {
    }
    node(int data, int key) : data(data), key(key), next(nullptr), prev(nullptr)
    {
    }
    int get_data()
    {
        return data;
    }
    node *get_next()
    {
        return next;
    }

    node *get_prev()
    {
        return prev;
    }
    int get_key()
    {
        return key;
    }
    void set_data(int data, int key)
    {
        this->data = data;
        this->key = key;
    }
    void set_next(node *next)
    {
        this->next = next;
    }
    void set_prev(node *prev)
    {
        this->prev = prev;
    }
};

class Dllist
{
    node *head, *list, *tail;

public:
    Dllist() : head(nullptr), list(nullptr), tail(nullptr)
    {
    }
    // i. Insert a new node at the end of the list.
    void appendNode(int data, int key)
    {
        if (list == nullptr)
        {
            list = new node(data, key);
            head = list;
            tail = list;
        }
        else
        {
            node *temp = new node(data, key);
            node *trav = list;
            while (trav != nullptr)
            {
                if (trav->get_next() == nullptr)
                {
                    temp->set_prev(trav);
                    trav->set_next(temp);
                    tail = trav->get_next();
                    head = list;
                    break;
                }
                trav = trav->get_next();
            }
        }
    }
    // ii.	Insert a new node at the beginning of list.
    void prependNode(int data, int key)
    {
        if (list == nullptr)
        {
            list = new node(data, key);
            head = list;
            tail = list;
        }
        else
        {
            node* temp = new node(data, key);
            node* trav = list;
            list->set_prev(temp);
            temp->set_next(list);
            list = temp;
            head = list;     
        }
    }
    //iii.	Insert a new node at given position.
    void insertNodeAfter(int data, int key, int pos)
    {
        node* temp = new node(data, key);
        node* trav = list;
        while (trav != nullptr)
        {
            if (trav->get_key() == pos)
            {
                temp->set_prev(trav);
                temp->set_next(trav->get_next());
                trav->set_next(temp);
                while (trav != nullptr)
                {
                    if (trav->get_next() == nullptr)
                    {
                        tail = trav;
                        break;
                    }
                    trav = trav->get_next();
                }
                break;
            }
            trav = trav->get_next();
        }
    }
    //iv. Delete any node
    void deleteNodeByKey(int key)
    {
        node* temp = list;
        while (temp != nullptr)
        {
            if (temp->get_key() == key)
            {
                node* prev = temp->get_prev();
                node* next = temp->get_next();
                prev->set_next(next);
                next->set_prev(prev);
                delete temp;
                break;
            }
            temp = temp->get_next();
        }
    }
    //v. Print the complete doubly link list.
    void traverse()
    {
        for (auto temp = head; temp != nullptr; temp = temp->get_next())
        {
            cout << temp->get_data() << " ";
        }
    }
};

int main(void)
{
    Dllist list;
    list.appendNode(1, 0);
    list.appendNode(2, 1);
    list.appendNode(3, 2);
    list.prependNode(0, 3);
    list.prependNode(-1, 4);
    list.insertNodeAfter(10, 5, 2);
    list.deleteNodeByKey(3);
    list.traverse();
    cout << endl;
}