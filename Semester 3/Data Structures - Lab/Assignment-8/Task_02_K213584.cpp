#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
struct node *temp;
void ADDMember()
{
    int val;
    cout << "Insert the element in queue : " << endl;
    cin >> val;
    if (rear == NULL)
    {
        rear = new node;
        rear->next = NULL;
        rear->data = val;
        front = rear;
    }
    else
    {
        temp = new node;
        rear->next = temp;
        temp->data = val;
        temp->next = NULL;
        rear = temp;
    }
}
void print()
{
    for(auto temp=front; temp!=nullptr; temp=temp->next)
    {
        cout << temp->data << " " << endl;
    }
}
void RemoveMember()
{
    auto temp=front->next;
    delete front;
    front = temp;
}

int main(void)
{
    for (int i = 0; i < 5; i++)
        ADDMember();
    RemoveMember();
    print();
}