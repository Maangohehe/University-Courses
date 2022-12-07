#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};
struct Node *top;
// Utility function to add an element
// data in the stack insert at the beginning
void push(int data)
{
    // Create new node temp and allocate memory
    struct Node *temp;
    temp = new Node();
    // Check if stack (heap) is full.// Then inserting an element would
    // lead to stack overflow
    if (!temp)
    {
        cout << "\nHeap Overflow";
        exit(1);
    }
    // Initialize data into temp data field
    temp->data = data;
    // Put top pointer reference into temp link
    temp->link = top;
    // Make temp as top of Stack
    top = temp;
}

void print_stack()
{
    int counter = 0;
    for (Node* tmp=top; tmp!=nullptr; tmp=tmp->link)
    {
        cout << "Element " << counter + 1 << ": " << tmp->data << endl;
        counter++;
    }
}
void recurse(Node* tmp)
{
    if (tmp->link==nullptr)
        return;
    recurse(tmp->link);
    cout << tmp->data << endl;
}

void print_rev_stack()
{
    Node* tmp = top;
    recurse(tmp);
}
void pop()
{
    Node* tmp=top->link;
    delete top;
    top = tmp;
}
int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        push(i);
    }
    cout << "Printing normally\n";
    print_stack();
    cout << "Printing in reverse\n";
    print_rev_stack();
    cout << "Popping the stack\n";
    pop();
    cout << "Stack after popping\n";
    print_stack();
}