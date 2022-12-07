#include <iostream>
#include <cmath>
using namespace std;
class node
{
public:
    int data;
    node *leftTree;
    node *rightTree;
};

class BinaryTree
{
    node *root;
    node* insertion(node* root, int key)
    {
        if (!root)
        {
            root = new node();
            root->data = key;
            root->leftTree = nullptr;
            root->rightTree = nullptr;
            return root;
        }
        if (!root->leftTree || !root->rightTree)
        {
            if (key > root->data && !root->rightTree)
            {
                node* temp = new node();
                temp->data = key;
                temp->leftTree = nullptr;
                temp->rightTree = nullptr;
                root->rightTree = temp;
                return root;
            }
            else if (key < root->data && !root->leftTree)
            {
                node* temp = new node();
                temp->data = key;
                temp->leftTree = nullptr;
                temp->rightTree = nullptr;
                root->leftTree = temp;
                return root;
            }
        }
        
        if (key > root->data)
            insertion(root->rightTree, key);
        if (key < root->data)
            insertion(root->leftTree, key);
        return root;
    }
public:
    BinaryTree() : root(nullptr)
    {
    }
    BinaryTree(int key)
    {
        root = new node();
        root->data = key;
    }
    void addNodes(int key)
    {
        this->root = insertion(this->root, key);
    }

};

int main(void)
{
    BinaryTree b1;
    int n;
    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> n;
        b1.addNodes(n);
    }
}