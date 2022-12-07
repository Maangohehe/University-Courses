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
    //Copy constructor
    S_Linked_list(const S_Linked_list& s1)
    {
        head = s1.head;
        list = s1.list;
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
            cout << "Node does not exist." << endl;
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
            cout << "Node does not exist." << endl;
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

    void update(int key, int new_data)
    {
        node* temp = NodeExist(key);
        if (temp == nullptr)
        {
            cout << "Node does not exist." << endl;
            return;
        }
        else
        {
            temp->set_data(new_data);
        }
    }

    void EvenOdd()
    {
        node* trav = head; // Traversal pointer
        node* even = nullptr, *odd = nullptr; //These will hold even and odd nodes
        for (trav; trav != nullptr; trav = trav->get_next())
        {
            // When an even data is found
            if (trav->get_data() % 2 == 0)
            {
                // If even node is empty
                if (even == nullptr)
                {
                    even = new node(trav->get_data());
                }
                else
                {
                    node* new_list = new node(trav->get_data());
                    node* n = even;
                    while (n != nullptr)
                    {
                        if(n->get_next() == nullptr)
                        {
                            n->AppendNodeEnd(n, new_list);
                            break;
                        }
                        n = n->get_next();
                    }
                }
            }
            // But when it is odd
            else
            {
                if (odd == nullptr)
                {
                    odd = new node(trav->get_data());
                }
                else
                {
                    node* new_list = new node(trav->get_data());
                    node* n = odd; //Use to traverse till end
                    while(n != nullptr)
                    {
                        if (n->get_next() == nullptr)
                        {
                            n->AppendNodeEnd(n, new_list);
                            break;
                        }
                        n = n->get_next();
                    }
                    
                }
            }
        }
        // Join the even list with the odd onen
        node* temp = even;
        while (temp != nullptr)
        {
            if (temp->get_next() == nullptr)
            {
                temp->set_next(odd);
                list = even; // Update the list
                head = list; //update the head
                break;
            }
            temp = temp->get_next();
        }
    }
    S_Linked_list addTwoNums(const S_Linked_list& l1, const S_Linked_list& l2)
    {
        node* trav = l1.head;
    }
    //Function to print the values of list
    void traverse()
    {
        for (auto temp = head; temp != nullptr; temp = temp->get_next())
        {
            cout << temp->get_data() << endl;
        }
    }
    void modifiedTraverse()
    {
        cout << "Output: ";
        for (auto temp = head; temp != nullptr; temp = temp->get_next())
        {
            cout << temp->get_data();
            if (temp->get_next() == nullptr)
                break;
            cout << "->";
        }
        cout << endl;
    }
};

int main(void)
{
    S_Linked_list list1, list2;
    for (int i = 1; i <= 3; i++)
    {
        list1.append(i);
        list2.append(i);
    }
    return 0;
}