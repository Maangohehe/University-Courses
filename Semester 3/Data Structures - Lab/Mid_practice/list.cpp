#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class List
{
    node *head, *list;
    int count()
    {
        // counts number of nodes in list
        int size = 0;
        for (node *temp = head; temp != nullptr; temp = temp->next)
        {
            size++;
        }
        return size;
    }
    node* swap(node* p1, node* p2, node* prev)
    {
        node* temp = p2->next;
        p2->next = p1;
        prev->next = p2;
        p1->next = temp;
        return p2;
    }
public:
    List() : head(nullptr), list(nullptr)
    {
    }
    void insert_beg(int data)
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
            node *temp = new node();
            temp->data = data;
            temp->next = list;
            list = temp;
            head = list;
        }
    }

    void sort()
    {
        // uses bubble sort
        int i = 0, j = 0, n = count();
        //n stores the size of list
        node *temp = list; //temp points to list
        node* prev = list; //prev will for now point to 
        bool now = 0;
        for (i=0; i < n; i++)
        {
            temp = list;
            prev = list;
            now = 0;
            for (j=0; j < n - i - 1; j++)
            {
                node* temp1 = temp, *temp2 = temp1->next;
                if (temp1->data > temp2->data)
                {
                    temp = swap(temp1, temp2, prev);
                }
                if(now)
                    prev=prev->next;
                temp = temp->next;
                now = 1;
            }
        }

        
        head = list;
    }
    void print()
    {
        for (node *temp = head; temp != nullptr; temp = temp->next)
        {
            cout << temp->data << " ";
        }
        cout << "\n";
    }
};

int main(void)
{
    List list1;
    list1.insert_beg(7);
    list1.insert_beg(98);
    list1.insert_beg(45);
    list1.insert_beg(2);
    cout << "Before sorting\n";
    list1.print();
    cout << "After sorting\n";
    list1.sort();
    list1.print();
}