// Author: Muhammad Hussain Javed
// Roll Number: 21K-3584
// Section: BCY-3A

#include <iostream>
using namespace std;
class node
{
    int data;
    node *next;

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
    // getters for getting data and next pointer
    int get_data()
    {
        return data;
    }
    node *get_next()
    {
        return next;
    }
    // Setters for setting data and next pointer
    void set_data(int data)
    {
        this->data = data;
    }
    void set_next(node *next)
    {
        this->next = next;
    }
    // Helper function to point next node to newNode
    void AppendNodeEnd(node *list, node *newNode)
    {
        list->next = newNode;
    }
    //Helper function to get previous node
    node* getPrev(int key, node* list)
    {
        while(list->data != key)
        {
            if (list->next->data == key)
            {
                return list;
            }
            list = list->next;
        }
        return nullptr;
    }
};
class S_Linked_list
{
    node *head, *list;
    //Function used for knowing if a node with this key exist or not
    node *NodeExist(int key)
    {
        node* n = list;
        while(n != nullptr)
        {
            if (n->get_data() == key)
            {
                return n;
            }
            n = n->get_next();
        }
        return nullptr;
    }

public:
    S_Linked_list()
    {
        head = nullptr;
        list = nullptr;
    }
    S_Linked_list(node *n)
    {
        head = n;
    }
    void append(int data)
    {
        if (head == nullptr)
        {
            list = new node();
            // Sets the list data
            list->set_data(data);
            // Sets the list next pointer
            list->set_next(nullptr);
            head = list;
        }
        else
        {
            node *temp = new node();
            temp->set_data(data);
            temp->set_next(nullptr);
            node *n = list; // We will use this n node to traverse
            while (n != nullptr)
            {
                if (n->get_next() == nullptr)
                {
                    // Whatever shenanigans happen with n, it will happen with my list too
                    // Cause I passed the reference of my list to n
                    n->AppendNodeEnd(n, temp);
                    head = list;
                    break;
                }
                n = n->get_next();
            }
        }
    }
    // This function will push back other elements, adding new node
    // at the start
    void push(int data)
    {
        if (head == nullptr)
        {
            list = new node();
            list->set_data(data);
            list->set_next(nullptr);
            head = list;
        }
        else
        {
            node *temp = new node();
            temp->set_data(data);
            temp->set_next(list);
            list = temp;
            head = list;
        }
    }
    // Inserts after an already existing node in a list
    void InsertAfterNode(int key, int data)
    {
        node *check = NodeExist(key);
        if(check == nullptr)
        {
            cout << "Node does not exist" << endl;
            return;
        }
        else
        {
            //Create new node with data
            node *temp = new node(data);
            temp->set_next(check->get_next());
            //Set next pointer of check to the new node
            check->set_next(temp);
        }
    }
    void deleteNode(int key)
    {
        node* temp = NodeExist(key);
        if (temp == nullptr)
        {
            cout << "Node does not exist" << endl;
            return;
        }
        node* prev = prev->getPrev(key, list);
        prev->set_next(temp->get_next());
    }

    void deleteNodeEnd()
    {
        node* traverse = list;
        node* prev = traverse;
        while (traverse != nullptr)
        {
            if (traverse->get_next() == nullptr)
            {
                prev->set_next(nullptr);
                delete traverse;
                return;
            }
            prev = traverse;
            traverse = traverse->get_next();
        }
    }
    //Function to print the values of list
    void traverse()
    {
        for (node *temp = head; temp != nullptr; temp = temp->get_next())
        {
            cout << temp->get_data() << endl;
        }
    }
};

int main(void)
{
    S_Linked_list list;
    int size, n, rem;
    cout << "Size of list: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> n;
        list.append(n);
    }
    cout << "Before deletion" << endl;
    list.traverse();
    cout << "Input element to delete: ";
    cin >> rem;
    list.deleteNode(rem);
    cout << "After deletion" << endl;
    list.traverse();
    return 0;
}