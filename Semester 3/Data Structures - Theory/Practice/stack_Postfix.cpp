#include <iostream>
#include <string>
using namespace std;

class node
{
    char data;
    node *next;
    friend class stack;
};

class stack
{
    node *top;
    size_t size_of_stack;
public:
    stack() : top(nullptr), size_of_stack(0)
    {
    }
    void push(char data)
    {
        node *temp = new node();
        temp->data = data;
        temp->next = top;
        top = temp;
        size_of_stack++;
    }
    void pop()
    {
        if (size_of_stack <= 0)
        {
            cout << "Stack underflow\n";
            return;
        }
        cout << top->data;
        node *temp = top->next;
        delete top;
        top = temp;
        size_of_stack--;
    }
    char peek()
    {
        return top->data;
    }
    void print()
    {
        for (auto temp = top; temp != nullptr; temp = temp->next)
        {
            cout << temp->data << " ";
        }
    }
    size_t length()
    {
        return size_of_stack;
    }
    void remove()
    {
        node* temp = top->next;
        delete top;
        top = temp;
    }
    bool is_empty()
    {
        if (top == nullptr)
            return 1;
        return 0;
    }
};

void infix_to_postfix(string expression)
{
    stack stk;
    for (int i = 0; i < expression.length(); i++)
    {
        if (expression[i] >= 65 && expression[i] <= 90 || expression[i] >= 'a' && expression[i] <= 'z')
        {
            cout << expression[i];
        }
        else if (expression[i] == '(')
        {
            stk.push(expression[i]);
        }
        else if (expression[i] == '^')
        {
            if (stk.peek() == '^')
                stk.pop();
            stk.push(expression[i]);
        }
        else if (expression[i] == '/' || expression[i] == '*')
        {
            if (!stk.is_empty() && (stk.peek() == '^' || stk.peek() == '*'))
                stk.pop();
            stk.push(expression[i]);
        }
        else if (expression[i] == '+' || expression[i] == '-')
        {
            if (!stk.is_empty() && (stk.peek() == '/' || stk.peek() == '^' || stk.peek() == '*'))
            {
                for (int j = 0; !stk.is_empty(); j++)
                {
                    stk.pop();
                }
            }
            stk.push(expression[i]);
        }
        else if (expression[i] == ')')
        {
            for (int i = 0; stk.peek() != '('; i++)
            {
                if (stk.peek() == ')')
                {
                    stk.remove();
                    continue;
                }
                stk.pop();
            }
            stk.remove();
        }
    }
    if (!stk.is_empty())
    {
        for (int i = 0; !stk.is_empty(); i++)
            stk.pop();
    }
}

int main(void)
{
    string expression;
    cout << "Input the infix expression: ";
    getline(cin >> ws, expression);
    infix_to_postfix(expression);
    cout << endl;
}