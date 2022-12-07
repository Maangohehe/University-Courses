#include <iostream>
using namespace std;

class node
{
public:
    int data, key;
    node* next;
    node():data(0), next(nullptr)
    {
    }
    node(int data, int key): data(data), key(key), next(nullptr)
    {
    }  
};

class CircularLinkedList
{
    node* head, *list;
    public:
    CircularLinkedList():head(nullptr), list(nullptr)
    {
    }
    //i. Insert a new node at the end of the list
    void appendNode(int data, int key)
    {
        if (head == nullptr)
        {
            list = new node(data, key);
            head = list;
            list->next = list;
        }
        else
        {
            node* temp = new node(data, key);
            node* trav = list;
            while (trav != nullptr)
            {
                if (trav->next == head)
                {
                    temp->next = head;
                    trav->next = temp;
                    break;
                }
                trav = trav->next;
            }
        }
    }
    //ii. Insert a new node at the beginning of list.
    void prependNode(int data, int key)
    {
        if (list == nullptr)
        {
            list = new node(data, key);
            list->next = list;
            head = list;
        }
        else
        {
            node* temp = new node(data, key);
            //First upadte the last node to point to temp
            node* trav = list;
            while (trav != nullptr)
            {
                if (trav->next == head)
                {
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
    void insertNodeAfter(int data, int key, int pos)
    {
        node* temp = new node(data, key);
        node* trav = list;
        while (trav != nullptr)
        {
            if (trav->key == pos)
            {
                temp->next = trav->next;
                trav->next = temp;
                break;
            }
            trav = trav->next;
        }
    }
    //iv. Delete any node
    void deleteNodeByKey(int key)
    {
        node* trav = list;
        node* prev = trav;
        while (trav != nullptr)
        {
            if (trav->key == key)
            {
                prev->next = trav->next;
                delete trav;
                break;
            }
            prev = trav;
            trav = trav->next;
        }
    }
    //v. Print the complete circular link list.
    void print()
    {
        for (auto temp = head; ; temp = temp->next)
        {
            cout << temp->data << " ";
            if (temp->next == (void*)head)
            {
                break;
            }
        }
        cout << endl;
    }
    
    void operator=(const CircularLinkedList& obj)
    {
        // CircularLinkedList temp;
        this->list = obj.list;
        this->head = obj.head;
        
    }
};

int main(void)
{
    CircularLinkedList list1, list2;
    list1.appendNode(1, 0);
    list1.appendNode(2, 1);
    list1.prependNode(0, 3);
    list1.insertNodeAfter(10, 5, 0);
    list1.deleteNodeByKey(1);
    list2.print();
}