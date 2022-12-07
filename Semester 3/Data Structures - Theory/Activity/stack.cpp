#include <iostream>
using namespace std;

template <class T1>
class node
{
public:
    char data;
    node<T1> *next;
};
template <class T1>
class stack
{
    node<T1> *list;
    int top;

public:
    stack() : list(nullptr), top(-1)
    {
    }
    void push(T1 data)
    {
        top++;
        if (list == nullptr)
        {
            list = new node<T1>();
            list->data = data;
            list->next = nullptr;
        }
        else
        {
            node<T1> *new_node = new node<T1>();
            new_node->data = data;
            new_node->next = nullptr;
            for (auto temp=list, i=0; i<top; temp=temp->next)
            {
                if (temp->next == nullptr)
                {
                    temp->next = new_node;
                    break;
                }
            }
        }
    }
    //Delete the top element, i.e add null
    void pop()
    {
    }
    void print()
    {
        for (auto temp=list; temp!=nullptr; temp=temp->next)
        {
            cout << temp->data << " ";
        }
        cout << endl;
    };
};

int main(void)
{
    stack<char> stk;
    stk.push('A');
    // stk.push('B');
    stk.print();
}