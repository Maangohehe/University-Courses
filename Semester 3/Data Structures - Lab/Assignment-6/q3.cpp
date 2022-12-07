#include <iostream>
using namespace std;
class node{
    public:
        int data, key;
        node* next;
        node():data(0), next(nullptr), key(-1)
        {}
        node(int data):data(data), next(nullptr), key(-1)
        {}
        void appendNode(int data)
        {
            this->data = data;
            this->next = nullptr;
        }
};

class linkedList{
    node* list, *head;
    size_t size_of_list;
    public:
        linkedList():list(nullptr), head(nullptr), size_of_list(0)
        {
        }
        void append(int data)
        {
            if (list == nullptr)
            {
                list = new node(data);
                this->list->data = data;
                this->list->next = nullptr;
                this->list->key += 1;
                ++size_of_list;
                head = list;
            }
            else
            {
                node* temp = new node(data);
                temp->key = list->key;
                temp->key = size_of_list;
                node* trav = list;
                while (trav != nullptr)
                {
                    if (trav->next == nullptr)
                    {
                        trav->next = temp;
                        ++size_of_list;
                        break;
                    }
                    trav = trav->next;
                }
            }
        }

        void sort()
        {
        }

        int& operator[](int index)
        {
            if (index >= size_of_list)
                exit(1);
            for (node* temp = head; temp!=nullptr; temp=temp->next)
            {
                if (temp->key == index)
                {
                    return temp->data;
                }
            }
            return list->data;
        }
        void print()
        {
            for (node* temp = head; temp!=nullptr; temp = temp->next)
            {
                cout << "Element " << ": " << temp->data << endl;
            }
        }
};


int main(void)
{
    linkedList list1;
    int size, i = 0;
    cout << "Number of elements in list: ";
    cin >> size;
    while (i < size)
    {
        int n;
        cout << "Element " << i + 1 << ": ";
        cin >> n;
        list1.append(n);
        i++; 
    }
    list1.sort();
    list1.print();
    return 0;
}