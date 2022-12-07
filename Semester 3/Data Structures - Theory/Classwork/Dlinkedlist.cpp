// An implementation of a doubly linked list
#include <iostream>
#include <exception>
using namespace std;
template <typename T1>
class node
{
    T1 data;
    node *next;
    node *prev;

public:
    node()
    {
        data = NULL;
        next = nullptr;
        prev = nullptr;
    }
    node(T1 data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
    //Some setters and getters
    void set_data(T1 data)
    {
        this->data = data;
    }
    void set_next(node *next)
    {
        this->next = next;
    }
    void set_prev(node* prev)
    {
        this->prev = prev;
    }
    T1 get_data()
    {
        return data;
    }
    node* get_next()
    {
        return next;
    }
    node* get_prev()
    {
        return prev;
    }
    node* search(int key, node* list)
    {
        node* temp = list;
        while (temp != nullptr)
        {
            if (temp->data == key)
            {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }
};
template <class T1>
class Dllist
{
    node<T1> *head, *tail, *list;
    size_t size_of_list;

public:
    Dllist()
    {
        head = nullptr;
        tail = nullptr;
        list = nullptr;
        size_of_list = 0;
    }
    void append(T1 data)
    {
        if (list == nullptr)
        {
            list = new node<T1>(data);
            head = list;
            tail = list;
        }
        else
        {
            node<T1> *temp = new node<T1>(data);
            //Traversal pointer
            node<T1> *trav = list;
            while (trav != nullptr)
            {
                if (trav->get_next() == nullptr)
                {
                    trav->set_next(temp);
                    temp->set_prev(trav);
                    tail = trav->get_next();
                    break;
                }
                trav = trav->get_next();
            }
        }
        ++size_of_list;
    }
    void insertAfter(int key, int data)
    {
        node<T1> *temp = list;
        temp = temp->search(key, list);
        node<T1> *new_node = new node<T1>(data);
        if (temp == nullptr)
        {
            cout << "Key does not exist." << endl;
            return;
        }
        else
        {
            new_node->set_next(temp->get_next());
            new_node->set_prev(temp);
            temp->set_next(new_node);
        }
    }
    size_t size()
    {
        return size_of_list;
    }
    //function acts as indexing
    T1 at(int index)
    {
        try
        {
            if (index >= size_of_list || index < 0)
            {
                throw size_of_list;
            }
        }
        catch(const size_t size)
        {
            out_of_range("Invalid index");
        }
        for (auto temp = head, counter = 0; counter != index + 1; counter++, temp = temp->get_next())
        {
            if (counter == index)
            {
                return temp->get_data();
            }
        }
        return 0;
    }
};

int main(void)
{
    Dllist<int> list;
    list.append(1);
    list.append(3);
    list.append(4);
    list.insertAfter(3, 7);
    for (int i = 0 ; i < list.size(); i++)
    {
        cout << list.at(i) << endl;
    }
    
}