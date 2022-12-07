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
    void p_ord(node* tree)
    {
        if (tree != nullptr)
        {
            cout << tree->name << "-> "; //print root
            p_ord(tree->leftTree); //visit left
            p_ord(tree->rightTree); //visit right
        }
    }
    void i_ord(node* tree)
    {
        //leftmost, root, left to right
        if (tree != nullptr)
        {
            i_ord(tree->leftTree);
            cout << tree->name << "->";
            i_ord(tree->rightTree);
        }
    }
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
    void in_order()
    {
        i_ord(this->root);
    }
    void pre_order()
    {
        p_ord(this->root);
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
    cout << "The pre-order traversal is:\n";
    b1.pre_order();
    cout << endl;
    cout << "The in-order traversal is:\n";
    b1.in_order();
    cout << endl;
}