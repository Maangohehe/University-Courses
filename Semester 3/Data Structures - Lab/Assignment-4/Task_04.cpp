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
    void insertAfterNode(int key, int data)
    {
        node *check = NodeExist(key);
        if(check == nullptr)
        {
            cout << "The element does not exist in the list";
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
    int size, n, key, data;
    cout << "Size of list: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> n;
        list.append(n);
    }
    cout << "Input key and data to put after node respectively: ";
    cin >> key >> data;
    list.insertAfterNode(key, data);
    cout << "After insertion: " << endl;
    list.traverse();
    return 0;
}