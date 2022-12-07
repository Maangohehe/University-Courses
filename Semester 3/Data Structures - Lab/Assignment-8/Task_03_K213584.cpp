#include <iostream>
using namespace std;
class node
{
public:
    int key;
    string name;
    node *leftTree;
    node *rightTree;
};

class BinaryTree
{
    node *root;

public:
    BinaryTree() : root(nullptr)
    {
    }
    BinaryTree(int key, string name)
    {
        root = new node();
        root->key = key;
        root->name = name;
    }
    void addNodes(int key, string name)
    {
        node *temp = new node();
        temp->key = key;
        temp->name = name;
        if (root == nullptr)
        {
            root = new node();
            root->key = key;
            root->name = name;
            root->leftTree = nullptr;
            root->rightTree = nullptr;
        }
        else
        {
            node* trav = root;
            while (true)
            {
                if (temp->key > trav->key && trav->rightTree == nullptr)
                {
                    trav->rightTree = temp;
                    break;
                }
                else if (temp->key < trav->key && trav->leftTree == nullptr)
                {
                    trav->leftTree = temp;
                    break;
                }
                else if(trav->leftTree != nullptr && temp->key < trav->key)
                {
                    trav = trav->leftTree;
                }
                else
                {
                    trav = trav->rightTree;
                }
            }
        }
    }
};

int main(void)
{
    BinaryTree b1;
    b1.addNodes(15, "15");
    b1.addNodes(10, "10");
    b1.addNodes(20, "20");
    b1.addNodes(8, "8");
    b1.addNodes(12, "12");
    b1.addNodes(16, "16");
    b1.addNodes(25, "25");
}